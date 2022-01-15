#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <errno.h>

int main(void){
  int fd;
  char key;
  struct flock lock;
  clock_t start = clock();
  /* Open a file descriptor to the file. */
  fd = open ("file.txt",O_RDWR);
  int m=700;
  for(int i=0; i<m; i++){ 
    write(fd, "a", 1);
  }
  fsync(fd);
  clock_t end = clock();
  printf("Excute Time1 : %f",(double)(end-start)/CLOCKS_PER_SEC);

  memset (&lock, 0, sizeof(lock));
  lock.l_type = F_WRLCK;
  /* Place a write lock on the file. */
  fcntl (fd, F_SETLKW, &lock);
  
  key=fgetc(stdin);
  start = clock();
  if(key=='\n'){
    /* Release the lock */
    lock.l_type = F_UNLCK;
    fcntl (fd, F_SETLKW, &lock);
  }

  write(fd, "Helloworld", 10);
  fsync(fd);
  char buf[1024];
  ssize_t nr;

 start:
  nr=read(fd,buf,sizeof(buf));
  if(nr==-1){
    if(errno==EINTR){
      goto start;
    }
    if(errno==EAGAIN){}
    else{}
  }
  
  for(int i=0; i<10; i++){
    printf("%c",buf[i]);
  }
  printf("\n");
  close(fd);
  end = clock();
  printf("Excute Time2 : %f\n",(double)(end-start)/CLOCKS_PER_SEC);
}


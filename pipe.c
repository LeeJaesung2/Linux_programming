#include <unistd.h>
#include <stdio.h>
#include <time.h>

#define size 40960

main(){
  struct timespec start, end;
  clock_gettime(CLOCK_MONOTONIC, &start);
  int fda[2];
  char buf[size];

  for(int i=0; i<size; i++){
    buf[i]=*"a";
    }
  

  if(pipe(fda)<0) error("create pipe failed\n");

  switch(fork()){
  case -1: error("fork failed\n");
  case 0:
    close(fda[1]);
    read(fda[0],&buf,size);
    for(int i=0; i<size; i++){
      printf("%c",buf[i]);
    }
    printf("\n");
    clock_gettime(CLOCK_MONOTONIC,&end);
    printf("Excute Time: %f\n",(end.tv_sec-start.tv_sec)+(end.tv_nsec-start.tv_nsec)/1000000000.0);
    break;
  default:
    close(fda[0]);
    write(fda[1],buf,size);
    break;
  }
}
    

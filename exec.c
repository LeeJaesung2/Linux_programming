#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
  clock_t start = clock();
  int pid;
  pid = fork();
  if (pid<0){
    fprintf(stderr, "Fork Failed");
    exit(-1);
  }
  else if(pid == 0){
    execlp("./child", "./child", NULL);
    
  }
  else{
    system("ls");
    wait((int*) 0);
    printf("Child Complete\n");
    clock_t end = clock();
    printf("Excute Time : %f\n", (double)(end-start)/CLOCKS_PER_SEC);
    exit(0);
  }
}

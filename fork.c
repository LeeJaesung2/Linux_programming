#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
  clock_t start = clock();
  int pid = fork();
  printf("getpid:%d\nchildpid:%d\n",getpid(),pid);
  if (pid<0){
    fprintf(stderr,"Fork Failed");
    exit(-1);
  }
  else if(pid==0){
    int pid = fork();
    printf("getpid:%d\nchildpid:%d\n",getpid(),pid);
    if (pid<0){
      fprintf(stderr,"Fork Failed");
      exit(-1);
    }
    else if(pid==0){
    }
    else{
      int pid = fork();
      printf("getpid:%d\nchildpid:%d\n",getpid(),pid);
      if (pid<0){
	fprintf(stderr,"Fork Failed");
	exit(-1);
      }
      else if(pid==0){
      }
      else{
	wait(NULL);
	exit(0);
      }
      wait(NULL);
      exit(0);
    }
  }
  else{
    int pid = fork();
    printf("getpid:%d\nchildpid:%d\n",getpid(),pid);
    if (pid<0){
      fprintf(stderr,"Fork Failed");
      exit(-1);
    }
    else if(pid==0){
      int pid = fork();
      printf("getpid:%d\nchildpid:%d\n",getpid(),pid);
      if (pid<0){
	fprintf(stderr,"Fork Failed");
	exit(-1);
      }
      else if(pid==0){
      }
      else{
	wait(NULL);
	exit(0);
      }
    }
    else{
      wait(NULL);
      exit(0);
    }
    wait(NULL);
    printf("Child Complete\n");
    clock_t end = clock();
    printf("excute Time:%f\n",(double)end-start)/CLOCKS_PER_SEC);
    exit(0);
    
  }
  
}

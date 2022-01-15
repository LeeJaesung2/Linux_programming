#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include<time.h>

sig_atomic_t sigint_count = 0;

void handler(int signal_number){
  ++sigint_count;
}



int main(){
  struct timespec start, end;
  clock_gettime(CLOCK_MONOTONIC,&start);
  struct sigaction sa;
  memset (&sa, 0, sizeof(sa));
  sa.sa_handler = &handler;
  sigaction (SIGINT, &sa, NULL);

  printf("sleep call #1\n");
  sleep(1);

  printf("sleep call #2\n");
  sleep(1);

  printf("sleep call #3\n");
  sleep(1);

  printf("SIGINT was raised %d times\n", sigint_count);

  clock_gettime(CLOCK_MONOTONIC,&end);
  printf("Excute Time:%f\n",(end.tv_sec-start.tv_sec) + (end.tv_nsec-start.tv_nsec)/1000000000.0 );
  return 0;
}

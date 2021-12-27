#include<stdio.h>
#include<time.h>

void main(){
  clock_t start = clock();
  int i = 70;
  while(i!=0){
    printf("Hello Linux\n");
    i--;
  }
  clock_t end = clock();
  printf("excute Time:%f\n ",(double)(end-start)/CLOCKS_PER_SEC);
}

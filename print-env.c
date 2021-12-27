#include <stdio.h>
#include <time.h>

extern char** environ;

int main(int argc, char* argv[]){
  clock_t start = clock();
  char** var;
  printf("The name of this program is '%s'.\n", argv[0]);
  printf("This program was invoked with %d argument.\n", argc - 1);
  
  if(argc > 1){
  	int i;
  	printf("The argument are:\n");
  	for(i=1; i<argc; ++i){
  		printf("%s\n", argv[i]);
  	}
  }
  
  for(var = environ; *var != NULL; ++var){
    printf("%s\n", *var);
    }
  clock_t end = clock();
  printf("excute Time:%f\n", (double)(end-start)/CLOCKS_PER_SEC);
  return 0;
}

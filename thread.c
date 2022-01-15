#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

struct char_print_parms{
  char character;
  int count;
};

void *char_print(void *data){
  
  int count = *((int *)data);
  int i=0;
  while(1){
    if (i==1){
      pthread_exit(NULL);
    }
    printf("%d\n",count);
    i++;
    sleep(1);
  }
}
      

int main(){
  clock_t start = clock();
  pthread_t thread1_id;
  pthread_t thread2_id;
  pthread_t thread3_id;
  pthread_t thread4_id;
  pthread_t thread5_id;
  pthread_t thread6_id;
  pthread_t thread7_id;
  pthread_t thread8_id;
  pthread_t thread9_id;
  pthread_t thread10_id;
  pthread_t thread11_id;
  pthread_t thread12_id;
  pthread_t thread13_id;
  pthread_t thread14_id;
  pthread_t thread15_id;
  pthread_t thread16_id;
  pthread_t thread17_id;
  pthread_t thread18_id;
  pthread_t thread19_id;
  pthread_t thread20_id;
  pthread_t thread21_id;
  pthread_t thread22_id;
  pthread_t thread23_id;
  pthread_t thread24_id;
  struct char_print_parms thread1_args;
  struct char_print_parms thread2_args;
  struct char_print_parms thread3_args;
  struct char_print_parms thread4_args;
  struct char_print_parms thread5_args;
  struct char_print_parms thread6_args;
  struct char_print_parms thread7_args;
  struct char_print_parms thread8_args;
  struct char_print_parms thread9_args;
  struct char_print_parms thread10_args;
  struct char_print_parms thread11_args;
  struct char_print_parms thread12_args;
  struct char_print_parms thread13_args;
  struct char_print_parms thread14_args;
  struct char_print_parms thread15_args;
  struct char_print_parms thread16_args;
  struct char_print_parms thread17_args;
  struct char_print_parms thread18_args;
  struct char_print_parms thread19_args;
  struct char_print_parms thread20_args;
  struct char_print_parms thread21_args;
  struct char_print_parms thread22_args;
  struct char_print_parms thread23_args;
  struct char_print_parms thread24_args;
  


  thread1_args.character = 'x';
  thread1_args.count = 30000;
  pthread_create(&thread1_id, NULL, &char_print, &thread1_args);

  thread2_args.character = 'o';
  thread2_args.count = 20000;
  pthread_create(&thread2_id, NULL, &char_print, &thread2_args);
  
  thread3_args.character = 'x';
  thread3_args.count = 30000;
  pthread_create(&thread3_id, NULL, &char_print, &thread3_args);

  thread4_args.character = 'o';
  thread4_args.count = 20000;
  pthread_create(&thread4_id, NULL, &char_print, &thread4_args);

  thread5_args.character = 'x';
  thread5_args.count = 30000;
  pthread_create(&thread5_id, NULL, &char_print, &thread5_args);

  thread6_args.character = 'o';
  thread6_args.count = 20000;
  pthread_create(&thread6_id, NULL, &char_print, &thread6_args);
  
  thread7_args.character = 'x';
  thread7_args.count = 30000;
  pthread_create(&thread7_id, NULL, &char_print, &thread7_args);

  thread8_args.character = 'o';
  thread8_args.count = 20000;
  pthread_create(&thread8_id, NULL, &char_print, &thread8_args);

  thread9_args.character = 'x';
  thread9_args.count = 30000;
  pthread_create(&thread9_id, NULL, &char_print, &thread9_args);

  thread10_args.character = 'o';
  thread10_args.count = 20000;
  pthread_create(&thread10_id, NULL, &char_print, &thread10_args);
  
  thread11_args.character = 'x';
  thread11_args.count = 30000;
  pthread_create(&thread11_id, NULL, &char_print, &thread11_args);

  thread12_args.character = 'o';
  thread12_args.count = 20000;
  pthread_create(&thread12_id, NULL, &char_print, &thread12_args);

  thread13_args.character = 'x';
  thread13_args.count = 30000;
  pthread_create(&thread13_id, NULL, &char_print, &thread13_args);

  thread14_args.character = 'o';
  thread14_args.count = 20000;
  pthread_create(&thread14_id, NULL, &char_print, &thread14_args);

  thread15_args.character = 'x';
  thread15_args.count = 30000;
  pthread_create(&thread15_id, NULL, &char_print, &thread15_args);

  thread16_args.character = 'o';
  thread16_args.count = 20000;
  pthread_create(&thread16_id, NULL, &char_print, &thread16_args);
  
  thread17_args.character = 'x';
  thread17_args.count = 30000;
  pthread_create(&thread17_id, NULL, &char_print, &thread17_args);

  thread18_args.character = 'o';
  thread18_args.count = 20000;
  pthread_create(&thread18_id, NULL, &char_print, &thread18_args);

  thread19_args.character = 'x';
  thread19_args.count = 30000;
  pthread_create(&thread19_id, NULL, &char_print, &thread19_args);

  thread20_args.character = 'o';
  thread20_args.count = 20000;
  pthread_create(&thread20_id, NULL, &char_print, &thread20_args);
  
  thread21_args.character = 'x';
  thread21_args.count = 30000;
  pthread_create(&thread21_id, NULL, &char_print, &thread21_args);

  thread22_args.character = 'o';
  thread22_args.count = 20000;
  pthread_create(&thread22_id, NULL, &char_print, &thread22_args);

  thread23_args.character = 'x';
  thread23_args.count = 30000;
  pthread_create(&thread23_id, NULL, &char_print, &thread23_args);

  thread24_args.character = 'o';
  thread24_args.count = 20000;
  pthread_create(&thread24_id, NULL, &char_print, &thread24_args);

  pthread_join(thread1_id, NULL);
  pthread_join(thread2_id, NULL);
  pthread_join(thread3_id, NULL);
  pthread_join(thread4_id, NULL);
  pthread_join(thread5_id, NULL);
  pthread_join(thread6_id, NULL);
  pthread_join(thread7_id, NULL);
  pthread_join(thread8_id, NULL);
  pthread_join(thread9_id, NULL);
  pthread_join(thread10_id, NULL);
  pthread_join(thread11_id, NULL);
  pthread_join(thread12_id, NULL);
  pthread_join(thread13_id, NULL);
  pthread_join(thread14_id, NULL);
  pthread_join(thread15_id, NULL);
  pthread_join(thread16_id, NULL);
   pthread_join(thread17_id, NULL);
  pthread_join(thread18_id, NULL);
  pthread_join(thread19_id, NULL);
  pthread_join(thread20_id, NULL);
  pthread_join(thread21_id, NULL);
  pthread_join(thread22_id, NULL);
  pthread_join(thread23_id, NULL);
  pthread_join(thread24_id, NULL);
  clock_t end = clock();
  printf("Excute Time:%f\n",(double)(end-start)/CLOCKS_PER_SEC);
}

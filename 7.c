#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rand2 (int a, int b){
  return rand() % (b-a+1) + a;
}
int main(int argc, char *argv[]){
srand(time(NULL));
  int n = atoi(argv[1]);
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);
  int array[n];
  for(int i = 0; i < n; i++){
    array[i] = rand2(a, b);
  printf("%d ", array[i]);
}
printf("\n");
return 0;
}

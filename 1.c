#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]){
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  for(int i = 0; i < 10; i++){
  printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}

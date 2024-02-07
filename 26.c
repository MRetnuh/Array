#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
 srand(time(NULL));
  int n[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12};
  char *a[] = {"Basto", "Copa", "Oro", "Espada"};
  for(int i=0; i<3; i++){
printf("%d de %s\n", n[rand() % 10], a[rand() % 4]);
  }
  return 0;
}

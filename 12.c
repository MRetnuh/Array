#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
srand(time(NULL));
  int array[10];
int frecuencias[10] = {0};
int i = 0;
while(i < 10){
  i++;
  array[i] = rand() % 10;
frecuencias[array[i]]++;
printf("%d ", array[i]);
}
printf("\n");
for(int i = 0; i <10; i++){
  printf("%d ", frecuencias[i]);
}
printf("\n");
return 0;
}

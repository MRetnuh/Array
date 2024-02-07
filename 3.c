#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
    int numeros[n];
  int suma = 0;
  for(int i = 0; i < n; i++){
    numeros[i] = i + 1;
    suma += numeros[i];
  }
  printf("la suma es %d\n", suma);
return 0;
}

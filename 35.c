#include<stdio.h>
   #include<stdlib.h>

  int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
    int matriz[n][n];

   for(int i = 0; i < n; i++){
     for(int j = 0; j<n; j++){
        matriz[i][j] = rand() % 10;
 printf("%d ", matriz[i][j]);
  }
  printf("\n");
  }
  return 0;
  }

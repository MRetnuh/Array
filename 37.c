#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int matriz[3][3];
int indice = 0;
for(int i = 0; i < 3; i++){
  for(int j = 0; j<3; j++){
    matriz[i][j] = atoi(argv[indice]);
    indice++;
  printf("%d ", matriz[i][j]);
  }
  printf("\n");
}
return 0;
}

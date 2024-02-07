#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
srand(time(NULL));
  int matriz[2][2];
for(int i = 0; i < 2; i++){
  for(int j = 0; j < 2; j++){
    matriz[i][j] = rand() % 10;
printf("%d ", matriz[i][j]);
  }
  printf("\n");
}
if(matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0] != 0){
  printf("es invertible\n");
}
else{
  printf("no es\n");
}
return 0;


}

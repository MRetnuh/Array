#include<stdio.h>
#include<stdlib.h>
void promedio_columna(int a[4][4]){
  double suma = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
}
suma = a[0][i] + a[1][i] + a[2][i] + a[3][i];
printf("promedio de columna %d: %.2f\n", i, suma/4);
}
}
void promedio_fila(int a[4][4]){
double suma = 0;

  for(int i =0; i < 4; i++){
for(int j = 0; j < 4; j++){
  }
suma = a[i][0] + a[i][1] + a[i][2] + a[i][3];
 printf("promedio de fila %d: %.2f\n", i, suma/4);
}

}
int main(int argc, char *argv[]){
int matriz[4][4] = {
  {2, 3, 4, 5},
  {3, 6, 8, 9},
  {5, 2, 8, 3},
  {2, 3, 4, 8}
};

for(int i = 0; i < 4; i++){
  for(int j = 0; j < 4; j++){
    printf("%d ", matriz[i][j]);
  }
  printf("\n");

}
promedio_fila(matriz);
promedio_columna(matriz);
return 0;
}

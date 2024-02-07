#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int A[3][3];
  int B[3][3];
  int C[3][3];
for(int i = 1; i <= 3; i++){
     for(int j = 1; j<=3; j++){
      A[i][j] = i;
      B[i][j] = i;;
C[i][j] = A[i][j] + B[i][j];

  printf("%d ", C[i][j]);
     }

  printf("\n");
     }
  return 0;
}

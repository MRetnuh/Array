#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
  srand(time(NULL));
  int n = atoi(argv[1]);
   int p = atoi(argv[2]);
  int tablero[n + 2][n + 2];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
    tablero[i][j] = 0;
    }
    }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
     int r = rand() % 100;
     if(r <  p){
 tablero[i][j] = -1;
  }
     for(int i = 1; i < n + 2; i++){
tablero[0][i] = -2;
tablero[n + 1][i] = -2;
tablero[i][0] = -2;
tablero[i][n+1] = -2;
     }
for(int j = 1; j < n + 1; i++){
  if(tablero[i][j + 1] == -1)
    tablero[i][j]++;
  if(tablero[i][j - 1] == -1)
    tablero[i][j]++;
      }
  printf("%d ", tablero[i][j]);
  }
  printf("\n");
  }
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
srand(time(NULL));
int n = atoi(argv[1]);
int p = atoi(argv[2]);
  int tablero[n][n];
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
printf("%d ", tablero[i][j]);
}
printf("\n");
}
return 0;
}

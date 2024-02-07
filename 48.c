#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
void swap(int a[], int i, int j){
  int t = a[i];
  a[i] = a[j];
    a[j] = t;
}
void shuffle(int a[], int n){
for(int i = 0; i < 1000; i++){
  int r = rand() % n;
  int s = rand() % n;
  swap(a, r, s);
}
}
bool is_magic(int C[3][3]){
bool result = true;
if(C[0][0] + C[1][1] + C[2][2] != 15){
  result = false;}
if(C[0][2] + C[1][1] + C[2][0] != 15){
   result = false;
}
for(int i = 0; i < 3; i++){
if(C[i][0] + C[i][1] + C[i][2] != 15){
    result = false;
 }
}
for(int i = 0; i<3; i++){
 if(C[0][i] + C[1][i] + C[2][i] != 15){
    result = false;
  }
 }

return result;
}
int main(int argc, char *argv[]){
srand(time(NULL));
  int k = 0;
  int n[] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9};
  shuffle(n, 9);
  int matriz[3][3];
for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
matriz[i][j] = n[k++];
printf("%d ", matriz[i][j]);
  }
printf("\n");
}
bool result = is_magic(matriz);
printf("%s\n", result? "es magico" : "no es magico");

return 0;
}

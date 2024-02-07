#include<stdio.h>
#include<stdlib.h>

void swap(int a[], int i, int j){
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
}

void printarr(int a[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]){
  int n = 20;
  int a[n];
  for(int i = 0; i < 20; i++){
    a[i] = i*2+2;
  }
  printarr(a, 20);
  for(int i = 0; i < n/2; i++){
    swap(a, i, n - 1 - i);
  }
  printarr(a,20);
  return 0;
}

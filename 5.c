#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
int num[(((b - a) + 1) + a)];
for(int i = a; i < b; i++){
num[i] = i + 1;
printf("%d ", num[i]);
}
printf("\n");
return 0;
}

#include<stdio.h>
#include<stdlib.h>
void cifrar(char *s, int n){
  for(int i = 0; s[i] != 0; i++){
if(s[i] != ' '){
    s[i] = (((s[i] - 'a') + n) %26)+'a';
  }
}
}
int main(int argc, char *argv[]){
printf("%s\n", argv[1]);
  cifrar(argv[1], atoi(argv[2]));
  printf("%s\n", argv[1]);
}

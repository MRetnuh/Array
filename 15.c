#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int conteo(char *s){
int i = 0;
while(s[i] != 0){
  i++;
}
return i;
}

int main(int argc, char *argv[]){
  char *palabra = argv[1];
  int length = conteo(palabra);
for(int i = 0; palabra[i] != length / 2; i++){
  if(palabra[i] != palabra[length - 1 - i]){
printf("no es palindromo\n");
break;
  }
  else{
    printf("si es palindromo\n");
  }
}
return 0;
}

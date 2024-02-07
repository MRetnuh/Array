#include<stdio.h>
#include<string.h>
int search(char *dicc[], char *s, int n){
for(int i = 0; i<n; i++){
if(strcmp(s, dicc[i]) == 0){
    return i;
}
}
return -1;
}

int main(int argc, char *argv[]){
  char *D[] = {
"arbol",
"bote",
"casa",
"dado",
"elefante",
"fuego",
"gol"
"huevo",
"isla"
};
int i = search(D, argv[1], 9);
if(i < 0){
  printf("no encontrado\n");
}
  else{
printf("encontrado en indice %d\n", i);
  }
return 0;
}

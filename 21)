#include<stdio.h>
#include<stdlib.h>
int length(char *s){
int i = 0;
while(s[i] != 0){
  i++;
}
  return i;
}
int main(int argc, char *argv[]){
char *word = argv[1];
if(length(word) > 10){
  printf("%c%d%c\n", word[0], length(word)-2, word[length(word)-1]);
}
else{
  printf("%s\n", word);
}
return 0;
}

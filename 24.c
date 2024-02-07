#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char *morse[] = {
      "• -",
      "-...",
      "-.-.",
      "-..",
     ".",
     "..-.",
     "--.",
     "....",
     "..",
     ".---",
     "-.-",
     ".-..",
     "--",
     "-.",
    "---",
    ".--.",
    "--.-",                                                     
    ".-.",
    "...",
   "-",
     "..-",
    "...-",
    ".--",
    "-..-",
  };
   for(int j = 1; j < argc; j++){
     for(int i = 0; argv[j][i] != 0; i++){
    printf("%s ", morse[argv[j][i] - 'a']);
     }
      puts("|");
   }
}

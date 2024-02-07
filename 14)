#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  char *str = argv[1];
  int freqs[27] = {0};
  for(int i = 0; str[i] != 0; i++)
    freqs[str[i] - 'a'] += 1;
printf("%s\n", str);
printf("[ ");
for(int i = 0; i< 26; i++)
  printf("%d ", freqs[i]);
printf(" ]\n");
}

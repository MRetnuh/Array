#include<stdio.h>

int main(void) {
  char *fechas[] = {
"22/11",
"26/11",
"26/11"
  };

  char *jugadores[] = {
"L. Messi",
"L. Messi",
"E. Fernandez"
  };
  int minutos[] = {10,64,87};
for(int i = 0; i < 3; i++){
  printf("%s gol de %s a los %d minutos\n",fechas[i], jugadores[i], minutos[i]);
}
return 0;
}

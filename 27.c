#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
char *palo[] = {"Basto", "Copa", "Oro", "Espada"};
char *n[] = {"Ancho", "dos", "tres", "cuatro", "cinco", "seis", "siete", "diez", "once", "doce"};
char mazo[40][40];
for(int i = 0; i<40; i++){
  char carta[40] = " ";
  strcat(carta, n[i % 10]);
  strcat(carta, " de " );
  strcat(carta, palo[i/10]);
  strcat(mazo[i], carta);
}
for(int i=0; i < 40; i++){
  printf("%s\n", mazo[i]);
}
return 0;
}

#include<stdio.h>
  #include<string.h>
#include<time.h>
#include<stdlib.h>
  void swap(char mazo[40][40], int r, int s){
char carta[40] = "";
strcpy(carta, mazo[r]);
strcpy(mazo[r], mazo[s]);
strcpy(mazo[s], carta);
  }
void shuffle(char mazo[40][40]) {
for(int i = 0; i < 1000; i++){
int r = rand() % 40;
int s = rand() % 40;
swap(mazo, r, s);
}
}
   int main(int argc, char *argv[]){
   char *palo[] = {"Basto", "Copa", "Oro", "Espada"};
   char *n[] = {"Ancho", "dos", "tres", "cuatro", "cinco", "seis",
     "siete", "diez", "once", "doce"};
   char mazo[40][40];
   for(int i = 0; i<40; i++){
     char carta[40] = "";
    strcat(carta, n[i % 10]);
   strcat(carta, " de " );
    strcat(carta, palo[i/10]);
    strcat(mazo[i], carta);
 }
shuffle(mazo);
 for(int i=0; i < 3; i++){
    printf("%s\n", mazo[i]);
  }
 return 0;
   }

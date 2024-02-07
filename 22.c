#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
int num = atoi(argv[1]);
  if (num < 1 || num > 12) {
          printf("Debe proporcionar un numero que aplique a un mes\n");
          return 0;
     }
char *mes[] = {
  "Enero",
  "Febrero",
  "Marzo",
  "Abril",
  "Mayo",
  "Junio",
  "Julio",
  "Agosto",
  "Septiembre",
  "Octubre",
  "Noviembre",
  "Diciembre"
};
  printf("el numero %d equivale al mes %s\n",num ,mes[num - 1]);
  return 0;
}

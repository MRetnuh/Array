#include <stdio.h>
#include <stdlib.h>

void peso_corporal(alt, peso){
 double peso_C = peso/(alt*alt);
printf("Tu masa corporal es:%3.f\n", peso_C);
if(peso_C < 1.85) {
    printf(" Tas muy flaco\n");
} else if(peso_C >= 1.85 && peso_C <= 2.50) {
    printf("Tas normal\n");
}else if(peso_C > 2.50){
    printf("Tas gordo\n");
}

}


int main(int argc, char *argv[]) {
    double alt = atoi(argv[1]);
    double peso = atoi(argv[2]);
    peso_corporal(alt, peso);
    printf("tu peso es %2.f\n", peso);
    return 0;
}

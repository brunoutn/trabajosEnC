#include <stdio.h>

int main(void) {

    int distanciaCm, distanciaM, distanciaKm = 0;

    printf("Ingrese un valor en centimetros: ");
    scanf("%d", &distanciaCm);

    if (distanciaCm >= 100000) {
        distanciaKm = distanciaCm/100000;
        distanciaCm -= distanciaKm * 100000;
    }
    if (distanciaCm >= 100) {
        distanciaM = distanciaCm / 100;
        distanciaCm -= distanciaM * 100;
    }
    
    
    printf("km: %d\n", distanciaKm);
    printf("m: %d\n", distanciaM);
    printf("cm: %d\n", distanciaCm);

    return 0;
}
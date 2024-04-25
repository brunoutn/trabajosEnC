#include <stdio.h>

int main(void) {
    int renta;

    printf("Ingrese el costo de su renta mensual: ");
    scanf("%d", &renta);

    if (renta > 0 && renta < 100000)
        printf("Le corresponde un 5%% de tasa impositiva");
     else if (renta < 350000)
        printf("Le corresponde un 15%% de tasa impositiva");
     else if (renta < 700000)
        printf("Le corresponde un 20%% de tasa impositiva");
     else if (renta <= 1000000)
        printf("Le corresponde un 30%% de tasa impositiva");
     else 
        printf("Le corresponde un 45%% de tasa impositiva");
    
    return 0;
}
#include <stdio.h>

int main(void) {

    int anio;

    printf("Ingrese un año: ");
    scanf("%d", &anio);

    if ((anio % 4) == 0)
        printf("El año es bisiesto.");
    else
        printf("El año no es bisiesto");
    
}
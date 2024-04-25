#include <stdio.h>

int main(void) {
    long int edad, ingresos;
    const int ingresosMinimos = 80000;
    const int edadMinima = 21;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese cuanto gana: ");
    scanf("%d", &ingresos);

    if (edad > edadMinima && ingresos >= ingresosMinimos) {
        printf("Tributa.");
        return 0;
    }
    
    printf("No tributa.");
    return 0;
}
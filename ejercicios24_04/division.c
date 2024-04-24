#include <stdio.h>

int main(void) {
    int num1,num2, resultado;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese otro: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("No se puede dividir por cero.");
        return 0;
    }
    
    resultado = num1/num2;

    printf("El resultado de %d / %d es %d\n", num1, num2, resultado);
    if (num1 % num2 == 0)
        printf("La division es exacta");
    else
        printf("La division no es exacta");
    
    
    return 0;
}
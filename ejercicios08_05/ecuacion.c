#include <stdio.h>

int main(void)
{
    float a, b, resultado;

    printf("Ingrese el valor del coeficiente A: ");
    scanf("%f", &a);
    printf("Ingrese el valor del coeficiente B: ");
    scanf("%f", &b);

    if (a == 0 && b == 0)
    {
        printf("Todos los numeros son solucion.");
    }
    else if (a == 0)
    {
        printf("La ecuacion no tiene solucion.");
    }
    else
    {
        resultado = (-b) / a;
        printf("El resultado de la ecuacion es: %.2f", resultado);
    }

    return 0;
}
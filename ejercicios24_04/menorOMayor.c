#include <stdio.h>

int main(void) {

    int num1, num2;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    if (num1 < num2)
         printf("El numero %d es menor que el numero %d", num1, num2);
        else if (num1 == num2)
           printf("Los numeros son iguales");
            else
                printf("El numero %d es mayor que el numero %d", num1, num2);

    return 0;
}
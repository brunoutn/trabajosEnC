#include <stdio.h>
#include <stdlib.h>

void elevarNumero(int, int, int*);

int main(void) {
    int base, potencia, resultado = 1;
    int *resultadoPuntero;

    resultadoPuntero = &resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("\nIngrese una potencia: ");
    scanf("%d", &potencia);

    elevarNumero(base, potencia, resultadoPuntero);

    printf("Numero original: %d, potencia a la cual se eleva: %d, resultado: %d", base, potencia, *resultadoPuntero);

    return 0;

}

void elevarNumero(int base, int potencia, int *resultado) {
    if (potencia > 0)
    {
        for (int i = 0; i < potencia; i++)
        {
           *resultado *= base;
        }
        
    }
    
}
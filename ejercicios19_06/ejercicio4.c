#include <stdio.h>
#include <stdlib.h>

// implementar una función en C que reciba un número entero y devuelva su valor absoluto utilizando punteros.
// Además, se proporcionará un programa principal que use esta función para calcular y mostrar el valor absoluto de un número dado.

void calcularValAbsoluto(int *);

int main(void)
{
    int numero = 0;
    int *valPtr;

    valPtr = &numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    calcularValAbsoluto(valPtr);

    printf("Numero ingresado: %d, Valor absoluto: %d", numero, *valPtr);

    return 0;
}

void calcularValAbsoluto(int *valor)
{
    if (*valor < 0)
    {
        *valor = *valor * -1;
    }
    else
    {
        *valor = *valor;
    }
}

/*
Este ejemplo utiliza de forma efectiva el puntero, ya que sobreescribe el valor de la direccion original

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define p printf
#define s scanf

void Abs(int,int*);

int main()

{

    int num1;
    int *ptr;

    p("\nIngrese un valor: ");
    s("%d",&num1);

    ptr=&num1; Asigna la direccion de num al puntero

    p("\nEl numero ingresado es: %d",num1);

    Abs(num1,ptr);

    p("\nSu valor absoluto es: %d",num1);

    return 0;

}

 

void Abs(int num1,int *absoluto)
{

    if (num1<=0)

        *absoluto=-num1;

    else

        *absoluto=num1;

    ACA AL MODIFICARSE EL VALOR DE absoluto CON *  SE ESTA MODIFICANDO EL VALOR ORIGINAL, ES DECIR EL VALOR DE NUM1, YA QUE LA DIRECCION A LA QUE APUNTA ES LA MISMA

}
*/
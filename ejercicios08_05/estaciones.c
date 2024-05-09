#include <stdio.h>

int main(void)
{
    int numDeMes;

    printf("Ingrese un numero de mes: ");
    scanf("%d", &numDeMes);

    switch (numDeMes)
    {
    case 12:
    case 1:
    case 2:
        printf("Verano");
        break;
    case 3:
    case 4:
    case 5:
        printf("Otoño");
        break;
    case 6:
    case 7:
    case 8:
        printf("Invierno");
        break;
    case 9:
    case 10:
    case 11:
        printf("Primavera");
        break;
    default:
        printf("Numero de mes invalido");
        break;
    }

    return 0;
}
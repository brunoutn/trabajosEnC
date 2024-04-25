//ingresar un numero entero entre 1 y 7, e indicar a que dia de la semana pertenece
#include <stdio.h>

int main(void) {
    int num;

    printf("Ingrese un numero entre el 1 y el 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("lunes");
        break;
    
    default:
        printf("No existe.");
        break;
    }

    return 0;
}
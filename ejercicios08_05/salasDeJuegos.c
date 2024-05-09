#include <stdio.h>

int main(void)
{
    int creditos;

    printf("Ingrese sus creditos adquiridos: ");
    scanf("%d", &creditos);
    printf("Con %d creditos puede acceder a las siguientes salas:\n", creditos);

    switch (creditos)
    {
    case 1:
        printf("Sala de consolas");
        break;
    case 2:
        printf("Sala de consolas\nSala de juegos 2D");
        break;
    case 3:
        printf("Sala de consolas\nSala de juegos 2D\n Sala de juegos 3D");
        break;
    case 4:
    default:
        printf(" Sala de consolas\n Sala de juegos 2D\n Sala de juegos 3D\n Realidad virtual");
        break;
    }

    return 0;
    
    
}
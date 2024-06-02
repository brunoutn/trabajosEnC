#include <stdio.h>

/*
En esta época del año comienza la pesca del Pejerrey. Se determinó realizar un concurso de pesca muy exclusivo en donde participan solamente 3 pescadores.
El ganador de concurso será el que más haya pescado durante el concurso y además se dará el premio a la pieza más grande.

Se deberá realizar un programa en el que se ingresarán las cantidades y longitudes de las piezas extraídas por cada pescador. Esta tarea será realizada por
una persona que se ocupará del ingreso de los datos a medida que los pescadores vayan extrayendo los peces del agua. Los pescadores serán identificados por
números del 1 al 3. En caso de querer cargarle al pescador 0 (valor que no corresponde a ninguno de los 3 pescadores) se dará por finalizado el concurso.

Cuando el programa finalice, deberá indicar:

    El pescador con mayor cantidad de piezas extraídas.
    El pescador con la pieza mayor (y su longitud).
    El total de piezas extraídas del agua.
    El promedio de las longitudes de los peces extraídos.

Pautas de corrección:

    El programa deberá compilar y funcionar correctamente.
    Deberá respetar los estilos de programación mencionados en clase.
    Recuerde sostener la indentación adecuada.
    Se valorará la validación de información: no permitir ingresar pescadores que no existen, longitudes de peces negativas, etc.
    Se valorarán los comentarios pertinentes en el código que ayuden a su comprensión (recordar siempre comentar por qué en las líneas necesarias, no en todo el código).
*/

void ingresoCantidad(float *longiPez, short int *cantPez, unsigned char *pescMaxLongi);

char calcularGanadorPorCantidad(short int *cant1, short int *cant2, short int *cant3);

float pezMaxLongi, totalLongitudes = 0;
unsigned char pescadorMaxLongi = '0';

int main(void)
{

    short int cantPesc1, cantPesc2, cantPesc3, cantTotal = 0;
    float longiPesc1, longiPesc2, longiPesc3 = 0;
    unsigned char opcion, pescadorMaxCanti;

    do
    {
        printf("Ingrese el numero de pescador para ingresar cantidad y longitud de cada pez\n");
        printf("PESCADOR 1: 1\nPESCADOR 2: 2\nPESCADOR 3: 3\nSALIR: 0\n");
        scanf(" %c", &opcion);

        switch (opcion)
        {
        case '1':
            system("cls");
            printf("\nPESCADOR 1\n");
            pescadorMaxLongi = 1;
            ingresoCantidad(&longiPesc1, &cantPesc1, &pescadorMaxLongi);
            break;
        case '2':
            system("cls");
            printf("\nPESCADOR 2\n");
            pescadorMaxLongi = 2;
            ingresoCantidad(&longiPesc2, &cantPesc2, &pescadorMaxLongi);
            break;
        case '3':
            system("cls");
            printf("\nPESCADOR 3\n");
            pescadorMaxLongi = 3;
            ingresoCantidad(&longiPesc3, &cantPesc3, &pescadorMaxLongi);
            break;
        case '0':
            system("cls");
            pescadorMaxCanti = calcularGanadorPorCantidad(&cantPesc1, &cantPesc2, &cantPesc3);
            cantTotal = cantPesc1 + cantPesc2 + cantPesc3;
            printf("Fin del concurso, mostrando resultados...\n");
            printf("PESCADOR 1: logro pescar %hd peces, siendo el mas largo de %.2fcm\n", cantPesc1, longiPesc1);
            printf("PESCADOR 2: logro pescar %hd peces, siendo el mas largo de %.2fcm\n", cantPesc2, longiPesc2);
            printf("PESCADOR 3: logro pescar %hd peces, siendo el mas largo de %.2fcm\n", cantPesc3, longiPesc3);
            if (pescadorMaxCanti == 'E')
            {
                printf("EMPATE EN CANTIDAD DE PECES\n");
            }
            else
            {
                printf("El ganador por cantidad de peces es el pescador numero %c\n", pescadorMaxCanti);
            }

            printf("Felicidades pescador nro %c, tiene usted el pez mas grande!!\n", pescadorMaxLongi);

            printf("TOTAL DE PECES ENTRE LOS 3 PESCADORES: %hd\n", cantTotal);
            printf("Promedio longitudes: %.2f", totalLongitudes/cantTotal);
            break;
        default:
            system("cls");
            printf("----Opcion invalida----\n");
            break;
        }
    }

    while (opcion != '0');

    return 0;
}

void ingresoCantidad(float *longiPez, short int *cantPez, unsigned char *pescMaxLongi)
{
    printf("Ingrese la longitud del pez: ");
    scanf("%f", longiPez);

    if (*longiPez > 0 && *longiPez <= 450)
    {
        if (*longiPez > pezMaxLongi)
        {
            pezMaxLongi = *longiPez;
            pescadorMaxLongi = *pescMaxLongi;
            system("cls");
        }
        (*cantPez)++;
        totalLongitudes += *longiPez;
    }
    else
    {
        printf("Error: La longitud debe estar entre 0 y 450 cm.\n");
        system("cls");
    }
}

char calcularGanadorPorCantidad(short int *cant1, short int *cant2, short int *cant3)
{
    unsigned char resultadoGanador;
    short int pezMaxCant = 0;

    // 1,2,3 - 1,3,2 - 2,1,3 - 2,3,1 - 3,2,1 - 3,1,2 - 1,1,1

    if ((*cant1 == *cant2 && *cant1 == *cant3) || (*cant2 == *cant3 && *cant2 == *cant1) || (*cant3 == *cant1 && *cant3 == *cant2))
    {
        resultadoGanador = 'E'; // Empate
    }

    if (*cant1 >= *cant2 && *cant1 >= *cant3)
    {
        resultadoGanador = '1';
    }

    if (*cant2 >= *cant1 && *cant2 >= *cant3)
    {
        resultadoGanador = '2';
    }

    return '3';
}
/*
La sede de licencias de conducir de una jurisdicción nos pide un prototipo
para generar algunas estadísticas de los circuitos evaluados.

Por cada circuito evaluado, se necesita ingresar la siguiente información:
▪ Cantidad de faltas.
▪ Tiempo en segundos que tomó realizarlo.
▪ Tipo de categoría ('A': Moto, 'B': Auto, 'C': Camión, 'D': Profesional)

La carga de datos finaliza de forma instantánea (sin leer ningún dato más)
cuando la cantidad de faltas leída vale -1

Condiciones para considerar un circuito como aprobado:
▪ Motos: Hasta dos faltas y un tiempo inferior a un minuto y medio.
▪ Autos: Una falta como máximo o un tiempo menor a dos minutos.
▪ Camiones y Profesionales: No pueden tener faltas. El tiempo no importa.

El programa debe calcular y mostrar, de forma clara y ordenada:
A) Cuántos circuitos se aprobaron sin ninguna falta.
B) Tiempo promedio (en minutos) de todos circuitos para la categoría Profesional.
*/
#include <stdio.h>
#include <stdlib.h>

short int cargarDatosCircuito(short int *, short int *, short int *);

int main(void)
{
    short int finCargaDatos, cantFaltas, tiempoSegundos, circuiEvaluados = 0;
    unsigned char categoria;

    while (finCargaDatos == 0)
    {
        printf("Ingrese la categoria correspondiente al circuito (A, B, C, D)\n");
        printf("A = MOTO, B = AUTO, C = CAMION, D = PROFESIONAL\n");
        scanf(" %c", &categoria);

        switch (categoria)
        {
        case 'A':
        case 'a':
            printf("INGRESANDO DATOS PARA EL CIRCUITO DE AUTO...\n");
            finCargaDatos = cargarDatosCircuito(&cantFaltas, &tiempoSegundos, &circuiEvaluados);
            break;

        default:
            printf("CATEGORIA INEXISTENTE, VUELVA A INTENTAR....\n");

            break;
        }
    }
    printf("mostrando");
    // mostrarResultados();

    return 0;
}

short int cargarDatosCircuito(short int *cantFaltas, short int *tiempoSegundos, short int *circuiEvaluados)
{
    printf("Ingrese la cantidad de faltas para el circuito (-1 para finalizar la carga de datos): ");
    scanf("%hd", cantFaltas);
    if (*cantFaltas == -1)
    {
        return -1;
    }
    else if (*cantFaltas >= 0)
    {
        do
        {
            printf("\nIngrese el tiempo que tomo realizarlo en segundos: ");
            scanf("%hd", tiempoSegundos);
            if (*tiempoSegundos == 0)
            {
                printf("\nEl tiempo ingresado es invalido, debe ser mayor a 0");
                system("cls");
                break;
            }
            
        } while (*tiempoSegundos == 0);
    }
    return 0;
}
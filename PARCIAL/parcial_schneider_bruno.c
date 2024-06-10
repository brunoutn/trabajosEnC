#include <stdio.h>
#include <stdlib.h>

int menu(void);

void registrarAsistencia(int *, int *, int *);
void mostrarAsistencia(int, int, int);
void mostrarEstadisticas(int, int, int);
void encontrarMasConcurrida(int, int, int);
int encontrarMenosConcurrida(int, int, int);

int main(void)
{
    int op, totalAsistentes, areaConcurrida = 0;
    int aula, biblioteca, laboratorio = 0;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            registrarAsistencia(&aula, &biblioteca, &laboratorio);
            break;
        case 2:
            if (aula > 0 && aula < 200 || biblioteca > 0 && biblioteca < 200 || laboratorio > 0 && laboratorio < 200)
            {
                mostrarAsistencia(aula, biblioteca, laboratorio);
            }
            else
            {
                printf("No hay datos para mostrar\n");
            }

            break;
        case 3:
            if (aula > 0 && aula < 200 || biblioteca > 0 && biblioteca < 200 || laboratorio > 0 && laboratorio < 200)
            {
                mostrarEstadisticas(aula, biblioteca, laboratorio);
            }
            else
            {
                printf("No hay datos para mostrar\n");
            }
            break;
        case 4:
            if (aula > 0 && aula < 200 || biblioteca > 0 && biblioteca < 200 || laboratorio > 0 && laboratorio < 200)
            {
                encontrarMasConcurrida(aula, biblioteca, laboratorio);
            }
            else
            {
                printf("No hay datos para mostrar\n");
            }
            break;
        case 5:
            // encontrarMenosConcurrida(aula, biblioteca, laboratorio);
        case 6:
            printf("Fin del programa...");
            return 0;
        default:
            system("cls");
            printf("Opcion invalida, vuelva a intentar");
            break;
        }
    } while (op);

    return 0;
}

int menu(void)
{
    int op;
    printf("****** Instituto Tecnico Militar ******\n");
    printf("******      GOTITAS DEL SABER     ******\n");
    printf("1. Cargar cantidad de alumnos por area.\n");
    printf("2. Mostrar datos ingresados por area.\n");
    printf("3. Mostrar estadisticas.\n");
    printf("4. Encontrar el area mas concurrida\n");
    printf("5. Encontrar el area menos concurrida\n");
    printf("6. Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &op);

    return op;
}

void registrarAsistencia(int *aula, int *biblioteca, int *laboratorio)
{
    int op, cantidad, cantidadBiblio, cantidadLab;

    while (op != -1)
    {
        printf("AREA A REGISTRAR ASISTENCIA (1 - AULA, 2 - BIBLIOTECA, 3 - LABO, PARA VOLVER AL MENU: -1): ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Ingrese cantidad de asistentes en aula: ");
            scanf("%d", &cantidad);
            if (cantidad == 0 || cantidad < 0)
            {
                printf("La cantidad de asistentes debe ser mayor a 0, vuelva a intentar...\n");
                continue;
            }
            else
            {
                *aula += cantidad;
                printf("Registrada la asistencia de %d alumnos en aula\n", cantidad);
            }
            break;
        case 2:

            printf("Ingrese cantidad de asistentes en biblioteca: ");
            scanf("%d", &cantidad);
            if (cantidad == 0 || cantidad < 0)
            {
                printf("La cantidad de asistentes debe ser mayor a 0, vuelva a intentar...\n");
                continue;
            }
            else
            {
                *biblioteca += cantidad;
                printf("Registrada la asistencia de %d alumnos en biblioteca\n", cantidad);
            }
            break;
        case 3:
            printf("Ingrese cantidad de asistentes en laboratorio: ");
            scanf("%d", &cantidad);
            if (cantidad == 0 || cantidad < 0)
            {
                printf("La cantidad de asistentes debe ser mayor a 0, vuelva a intentar...\n");
                continue;
            }
            else
            {
                *laboratorio += cantidad;
                printf("Registrada la asistencia de %d alumnos en laboratorio\n", cantidad);
            }
            break;
        default:
            printf("area inexistente\n");
            break;
        }
    }
}

void mostrarAsistencia(int aula, int biblio, int lab)
{
    printf("Mostrando alumnos asistentes por cada area: \n");
    printf("Aula: %d\n", aula);
    printf("Biblioteca: %d\n", biblio);
    printf("Laboratorio: %d\n", lab);
}

void mostrarEstadisticas(int aula, int biblio, int lab)
{
    int totalAsistencia;
    float porcentajeAsistentes, promedioAsistentes;
    if (aula > 0 || biblio > 0 || lab > 0)
    {
        totalAsistencia = aula + biblio + lab;

        printf("Total asistentes entre todas las areas: %d", totalAsistencia);
    }
    else
    {
        printf("No hay datos para evaluar.\n");
    }
}

void encontrarMasConcurrida(int aula, int biblio, int lab)
{

    if ((aula == biblio && aula == lab) || (biblio == lab && biblio == aula) || (lab == aula && lab == biblio))
    {
        printf("Todas las areas son concurridas por la misma cantidad de alumnos: %d\n", aula);
    }
    else if (aula >= biblio && aula >= lab)
    {
        printf("El area mas concurrida es el aula con %d asistentes\n", aula);
    }
    else if (biblio >= aula && biblio >= lab)
    {
        printf("El area mas concurrida es la biblioteca con %d asistentes\n", biblio);
    }
    else if (lab >= aula && lab >= biblio)
    {
        printf("El area mas concurrida es el laboratorio con %d asistentes\n", lab);
    }
}
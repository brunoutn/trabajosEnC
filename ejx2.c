#include <stdio.h>
#include <time.h>

int maximo(int, int);
int minimo(int, int);

int main(void)
{
    int numRandom;
    srand(time(NULL)); //inicializa el contador random

    for (int i = 0; i < 10; i++)
    {
        numRandom = rand()%(21);
        printf("%d\n", numRandom);
    }
    
}
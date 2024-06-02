#include <stdio.h>

void cargarDato(int *);
int maximo(int, int);
int minimo(int, int);

int main(void)
{
    int num, max, min, flag = 1;

    do
    {
        cargarDato(&num);
        if (flag) {
            max = num;
            min = num;
            flag = 0;
        } else {
            max = maximo(max, num);
            min = minimo(min, num);
        }

    } while (num);
}

#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 10,
};

void leer_secuencia(int nelms, int lista[nelms])
{
    printf("Introduzca 10 numeros (al menos dos iguales y dos distintos): \n");
    for (int i = 0; i < nelms; i++)
    {
        scanf(" %d", &lista[i]);
    }
}

int main()
{
    int list[MAX];
    leer_secuencia(MAX, list);
}

#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 10,
};

void leer_num_abuscar(int* num)
{
    printf("Introduzca el numero a buscar: ");
    scanf("%d", num);
}

void leer(int nelms, int lista[nelms])
{
    printf("Introduzca 10 numeros enteros: ");
    for (int i = 0; i < nelms; i++)
        scanf(" %d", &lista[i]);
}

bool buscar(int lista[], int num)
{
    int i = 0;
    while(lista[i] != num)
    {
        i++;
    }
    return i;
}

void resultado_busqueda(int num, int i, int lista[])
{
    if (lista[i] == num)
        printf("El numero %d SI esta en la coleccion, en la posicion: %d", num, i);
    else
        printf("El numero %d NO esta en la coleccion, en la posicion: %d", num, i);
}

int main()
{
    int lista[MAX];
    int num;
    leer_num_abuscar(&num);
    leer(MAX, lista);
    resultado_busqueda(num, buscar(lista, num), lista);
}

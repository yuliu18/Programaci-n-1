#include <stdio.h>

void leer(int* num)
{
    printf("Introduzca un numero: ");
    scanf(" %d", num);
}

void imprimir_raya (int num)
{
    for(int i = 1; i <= num * 2 - 1; i++)
        printf("-");
    printf("\n");
}

void imprimir_espacio(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf(" ");
    }
}

void imprimir_asterisco(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("* ");
    }
    printf("\n");
}

void imprimir_rombo(int num)
{
    imprimir_raya(num);
    for (int fila = 1; fila <= num; fila++)
    {
        imprimir_espacio(num - fila);
        imprimir_asterisco(fila);
    }
    for (int fila = 1; fila < num; fila++)
    {
        imprimir_espacio(fila);
        imprimir_asterisco(num - fila);
    }
    imprimir_raya(num);
}

int main()
{
    int num;
    leer(&num);
    imprimir_rombo(num);
}

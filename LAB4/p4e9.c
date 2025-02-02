#include <stdio.h>

void leer(int* num)
{
    printf("Introduzca el numero de filas (menor de 10): ");
    scanf(" %d", num);
    while ((*num <= 0) || (*num > 10))
    {
        printf("Error. ");
        printf("Introduzca el numero de filas (menor de 10): ");
        scanf(" %d", num);
    }
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

void imprimir_numeros(int fila)
{
    for (int i = 1; i <= fila; i++) {
        printf("%d", i);
    }
    for (int i = fila - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void imprimir_triangulo(int num)
{
    imprimir_raya(num);
    for (int fila = 1; fila <= num; fila++)
    {
        imprimir_espacio(num - fila);
        imprimir_numeros(fila);
    }
    imprimir_raya(num);
}

int main()
{
    int num;
    leer(&num);
    imprimir_triangulo(num);
}

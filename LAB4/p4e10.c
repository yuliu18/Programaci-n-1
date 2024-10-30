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

void imprimir_numeros(int fila) {
    int num = fila;
    for (int i = 0; i < fila; i++) {
        printf("%d", num % 10);
        num = (num + 1) % 10;
    }

    num = (num - 2 + 10) % 10;

    for (int i = 0; i < fila - 1; i++) {
        printf("%d", num % 10);
        num = (num - 1 + 10) % 10;
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


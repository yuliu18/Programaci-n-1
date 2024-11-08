#include <stdio.h>

void leer(int* num1)
{
    printf("Introduce el número de filas: ");
    scanf(" %d", num1);
    while(*num1 < 0)
    {
        printf("Error. ");
        printf("Introduce el número de filas: ");
        scanf(" %d", num1);
    }
}

int incremento_circular(int valor, int limite)
{
    int valor_devuelto = valor + 1;
    if (valor_devuelto >= limite)
    {
        valor_devuelto = 0;
    }
    return valor_devuelto;
}

void cuadrado(int fila)
{
    for (int i = 0; i < fila; ++i) {
        int valor = i;
        for (int j = 0; j < fila; ++j) {
            printf("%d", valor);
            valor = incremento_circular(valor, fila);
        }
        printf("\n");
    }
}

int main()
{
    int num1;
    leer(&num1);
    cuadrado(num1);
}

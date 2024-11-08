#include <stdio.h>

void leer(int* num1)
{
    printf("Introduzca un numero: ");
    scanf(" %d", num1);
    while (*num1 < 0)
    {
        printf("Error.");
        printf("Introduzca un numero: ");
        scanf(" %d", num1);
    }
}

int fibonacci(int num1)
{
    int result;
    if (num1 == 0)
        result = 0;
    else if (num1 == 1 || num1 == 2)
        result = 1;
    else
        result = fibonacci(num1 - 1) + fibonacci (num1 - 2);
    return result;
}

void mostrar(int num1, int resultado)
{
    printf("fibonacci(%d): %d", num1, resultado);
}

int main()
{
    int num1;
    leer(&num1);
    int resultado = fibonacci(num1);
    mostrar(num1, resultado);
}

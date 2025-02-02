#include <stdio.h>

void leer(int* a, int* b)
{
    printf("Introduce dos numeros enteros mayores que cero: ");
    scanf(" %d %d", a, b);
    while (*a <= 0 || *b <= 0)
    {
        printf("Error. Introduce dos numeros enteros mayores que cero: ");
        scanf(" %d %d", a, b);
    }
}

void intercambiar(int* a, int* b)
{
    int z = *a;
    *a = *b;
    *b = z;
}

void ordenar(int* a, int* b)
{
    if (*a > *b)
        intercambiar(a, b);
}

double factorial(int n)
{
    double resultado = 1.0;
    for (int i = n; i > 0; i--)
    {
        resultado *= i;
    }
    return resultado;
}

double potencia(int base, int exp)
{
    double resultado = 1.0;
    for (int i = 1; i <= exp; i++)
        resultado *= base;
    return resultado;
}

double termino(int a, int b)
{
    ordenar(&a, &b); // Asegura que a <= b
    double resultado1 = potencia(b, a);
    double resultado2 = factorial(a);
    return resultado1 / resultado2;
}

void mostrar(double t)
{
    printf("El resultado es: %lg\n", t);
}

int main()
{
    int a, b;
    leer(&a, &b);
    double resultado = termino(a, b);
    mostrar(resultado);
}





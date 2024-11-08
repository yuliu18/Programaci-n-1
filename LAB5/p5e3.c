#include <stdio.h>

void leer(double* num1)
{
    printf("Introduzca el valor de X[0..1]: ");
    scanf(" %lg", num1);
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

double potencia(double base, int exp)
{
    double resultado = 1.0;
    for (int i = 1; i <= exp; i++)
        resultado *= base;
    return resultado;
}

double serie_Taylor(double x)
{
    double S = 1.0;
    for (int i = 1; i < 7; i++)
    {
        S = S + (potencia(x, i) / factorial(i));
    }
    return S;
}

void mostrar(double resultado)
{
    printf("Serie: %lg", resultado);
}

int main()
{
    double x;
    leer(&x);
    double resultado = serie_Taylor(x);
    mostrar(resultado);
}



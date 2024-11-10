#include <stdio.h>
void leer(double* num1)
{
    printf("Introduzca el valor de X[0..1]: ");
    scanf(" %lg", num1);
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
    double termino = x, S = x;
    int n = 1;
    while (termino >= 0.001)
    {
        double multiple = 1.0;
        for (int i = 1; i <= n; i++) {
            multiple *= (2.0 * i - 1)/ (2.0 * i);
        }
        termino = multiple * (potencia(x, 2 * n + 1) / (2 * n + 1));
        S += termino;
        n++;
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


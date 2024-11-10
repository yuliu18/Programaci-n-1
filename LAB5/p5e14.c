#include <stdio.h>

void leer(int* num1)
{
    printf("Introduzca un numeros entero: ");
    scanf(" %d", num1);
}

int suma_naturales(int n)
{
    int resultado;
    if (n == 0)
        resultado = 0;
    else if (n > 0)
        resultado = n + suma_naturales(n - 1);
    return resultado;
}

void mostrar(int resultado, int n)
{
     printf("La suma de los primeros números naturales hasta el %d es: %d\n", n, resultado);
}

int main()
{
    int num1;
    leer(&num1);
    if (num1 < 0)
        printf("Error");
    else
        mostrar(suma_naturales(num1), num1);

}

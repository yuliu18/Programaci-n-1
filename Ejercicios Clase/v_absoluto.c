#include <stdio.h>

int valor_absoluto (int n);

int main ()
{
    int n;
    printf("Introduzca un numero: ");
    scanf(" %d",&n);
    printf("El valor absoluto de %d es %d", n, valor_absoluto(n));
}

int valor_absoluto (int n)
{
    if (n < 0)
        n *= -1;
    return (n);
}

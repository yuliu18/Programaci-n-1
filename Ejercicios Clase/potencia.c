#include <stdio.h>

int main()
{
    int base, exponente;
    long resultado = 1;
    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &base, &exponente);

    if ((base < 0) || (exponente < 0) || (base == 0 && exponente == 0))
        printf("Error\n");
    else
    {
        if (exponente == 0)
        {
            resultado = 1;
        }
        for (int i = exponente; i > 0; i--)
        {
            resultado *= base;
        }
        printf("EL resultado es: %ld\n", resultado);
    }
}


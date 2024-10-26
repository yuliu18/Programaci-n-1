#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool es_primo = num > 1;

    printf("Introduzca un numero: ");
    scanf(" %d", &n);

    for (int i = 2; i <= n/2 && (es_primo); i++) // bucle for con final anticipado
    {
        if (n % i == 0)
        {
            es_primo = false;
        }
    }
    if (es_primo)
        printf("Es primo\n");
    else
        printf("No es primo\n");
}

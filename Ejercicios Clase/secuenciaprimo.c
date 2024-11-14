#include <stdio.h>
#include <stdbool.h>

void leer(int* num)
{
    printf("Introduzca una secuencia de numeros terminado en 0: ");
    scanf("%d", num);
}

bool es_primo(int num)
{
    return ((num % 2 != 0 && num > 2) || (num == 2));
}

void mostrar(int resultado)
{
    printf(" %d", resultado);
}

void procesarsecuencia(int num)
{
    while (num != 0)
    {
        if (es_primo(num))
            mostrar(num);
        scanf("%d", &num);
    }
}

int main()
{
    int num;
    leer(&num);
    if (num == 0)
        printf("Primo: 0");
    else
    {
        printf("Primo: ");
        procesarsecuencia(num);
    }
}


#include <stdio.h>

void leer(int* num)
{
    printf("Introduce un numero(>1): ");
    scanf(" %d", num);
}

void mostrar(int num)
{
    printf(" %d ", num);
}

void factorial(int num)
{
    int resultado = num;
    int i = 2;
    while (i < num)
    {
        if(resultado % i == 0)
        {
            mostrar(i);
            resultado /= i;
        }
        else
        {
            i++;
        }
    }
}

void resultado(int num)
{
    printf("Los divisores primos de %d son: ", num);
    factorial(num);
}

int main()
{
    int num;
    leer(&num);
    resultado(num);
}

#include <stdio.h>

int main()
{
    int num1;
    int resultado = 1;
    printf("Introduzca un numeros: ");
    scanf(" %d", &num1);

    if (num1 <= 0)
        printf("Error\n");
    else
    {
        for (int i = 1; i <= num1; i++)
        {
            resultado = resultado * i;
        }
        printf("EL resultado es: %d\n", resultado);
    }
}

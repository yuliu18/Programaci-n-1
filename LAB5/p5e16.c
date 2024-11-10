#include <stdio.h>

void leer(int* num1, int* num2)
{
    printf("Introduzca dos numeros enteros: ");
    scanf(" %d %d", num1, num2);
}

void swaps(int* num1, int* num2)
{
    int z = *num1;
    *num1 = *num2;
    *num2 = z;
}

int producto (int x, int y)
{
    int resultado;
    if (y == 0)
    {
        resultado = 0;
    }
    else if (y > 0)
    {
        resultado = x + producto(x, y - 1);
    }
    return resultado;
}

void mostrar(int resultado)
{
     printf("Su producto (usando sumas y restas) es: %d\n", resultado);
}
int main()
{
    int num1, num2;
    leer(&num1,&num2);
    if (num1 < 0 || num2 < 0)
        printf("Error");
    else
    {
        if (num2 > num1)
            swaps(&num1, &num2);
        mostrar(producto(num1, num2));
    }
}

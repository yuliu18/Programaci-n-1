#include <stdio.h>
#include <windows.h>

int main()
{
    int num;
    int b = 0;
    int c = 1;
    int resultado = 0;
    printf("Introduzca N: ");
    scanf(" %d", &num);

    if (num <= 0)
        printf("Secuencia Fibonacci vacía\n");
    else if (num == 1)
        printf("%d", resultado);
    else
    {
        printf("%d ", b);
        printf("%d ", c);
        for (int i = 2; i < num; i++)
        {
            resultado = b + c;
            b = c;
            c = resultado;
            printf("%d ", resultado);
        }
    }
}

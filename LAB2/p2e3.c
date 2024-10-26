#include <stdio.h>
#include <windows.h>

int main()
{
    int num1, num2;
    int divisor, dividiendo;

    printf("Introduzca los dos numeros enteros: ");
    scanf(" %d %d", &num1, &num2);

    if ((num2 != 0) && num1 % num2 == 0)
    {
        divisor = num2;
        dividiendo = num1;
    }
    else if (num2 % num1 == 0)
    {
        divisor = num1;
        dividiendo = num2;
    }
    else
        divisor = 0;

    if (divisor != 0)
        printf("%d si es divisor de %d\n", divisor, dividiendo);
    else
        printf("No son divisibles\n");
}

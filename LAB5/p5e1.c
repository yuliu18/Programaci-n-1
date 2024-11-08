#include <stdio.h>
#include <stdbool.h>

void leer(int* num1, int* num2)
{
    printf("Introduzca un intervalo(dos números): ");
    scanf(" %d %d", num1, num2);
}
bool intervalo_erroneo(int num1, int num2)
{
    return (num1 > num2) || ((num1 <= 0) || (num2 <= 0));
}

int mcd(int num1, int num2)
{
    int result;
    if (num1 == num2)
        result = num1;
    else if (num1 > num2)
        result = mcd(num1 - num2, num2);
    else if (num2 > num1)
        result = mcd(num1, num2 - num1);
    return result;
}

void mostrar (int num1, int num2)
{
    printf("Coprimos: %d, %d\n", num1, num2);
}

void coprimos(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        for (int j = (i + 1); j <= num2; j++)
        {
            if (mcd(i, j) == 1)
            {
                mostrar(i, j);
            }
        }
    }
}

int main()
{
    int num1, num2;
    leer(&num1, &num2);
    if (intervalo_erroneo(num1, num2))
    {
        printf("Error");
    }
    else
    {
        coprimos(num1, num2);
    }
}

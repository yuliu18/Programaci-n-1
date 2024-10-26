#include <stdio.h>

int main()
{
    int num1, num2;
    int resto = 0;
    int cociente = 0;
    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &num1, &num2);

    if((num1 <= 0) || (num2 <= 0) || (num2 > num1))
        printf("Error\n");
    else
    {
        while ((resto > num2) || (resto == 0))
        {
            num1 -= num2;
            resto = num1;
            cociente++;
        }
        printf("Resto: %d y Cociente: %d", resto, cociente);
    }
}

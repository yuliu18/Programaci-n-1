#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num, resto, num1;
    int digito = 0;
    printf("Introduzca un número (>= 0): ");
    scanf(" %d", &num);
    num1 = num;

    if (num <= 0)
        printf("Error\n");
    else
    {
        while (num > 0)
        {
            resto = num % 10;
            num /= 10;
            if (resto % 2 == 0)
                digito++;
        }
        printf("El número %d tiene %d digitos pares", num, digito);
    }
}

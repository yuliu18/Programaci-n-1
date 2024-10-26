#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1, num2;

    printf("Introduzca dos número: ");
    scanf(" %i %i", &num1, &num2);

    if (num1 % num2 == 0 && num2 != 0)
        printf("%i es divisible por %i", num1, num2);
    else
        printf("%i no es divisible por %i",num1, num2);
}

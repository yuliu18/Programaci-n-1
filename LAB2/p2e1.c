#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1;

    printf("Introduzca un n�mero entero: ");
    scanf(" %d", &num1);

    if (num1 >= 0)
        printf("El n�mero %d no es negativo", num1);
    else
        printf("El n�mero %d s� es negativo", num1);
}

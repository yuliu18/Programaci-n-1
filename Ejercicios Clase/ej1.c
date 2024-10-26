#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1;
    int resultado = 0;

    printf("Introduzca un número para calcular su valor absoluto: ");
    scanf(" %i", &num1);

    if (num1 < 0)
        resultado = num1 * -1;
    else
        resultado = num1;

    printf("El valor absoluto de %i es %i\n", num1, resultado);
}

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1, num2, num3;
    int valornum, doble;

    printf("Introduzca tres dígitos: ");
    scanf(" %i %i %i", &num1, &num2, &num3);

    valornum = num1 * 100 + num2 * 10 + num3;
    doble = valornum * 2;

    printf("valor númerico: %i\n", valornum);
    printf("valor doble: %i", doble);
}

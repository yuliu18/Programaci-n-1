#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num, num1, num2, num3;
    int doble;

    printf("Introduzca tres dígitos: ");
    scanf(" %i", &num);

    doble = num * 2;
    num1 = num / 100;
    num2 = (num % 100) / 10;
    num3 = (num % 100) % 10;

    printf("valor númerico: %i\n", num);
    printf("valor doble: %i\n", doble);
    printf("Digito 1: %i\n", num1);
    printf("Digito 2: %i\n", num2);
    printf("Digito 3: %i\n", num3);
}

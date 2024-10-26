#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const int M_3 = 3;
const int M_4 = 4;
const int M_5 = 5;

int main()
{
    int num1;
    bool ok = false;

    printf("Introduzca un numero entero: ");
    scanf(" %d", &num1);

    if (num1 % M_3 == 0)
        ok = true;
    else if (num1 % M_4 == 0)
        ok = true;
    else if (num1 % M_5 == 0)
        ok = true;

    if (ok)
        printf("SI es multiplo\n");
    else
        printf("No es multiplo\n");
}

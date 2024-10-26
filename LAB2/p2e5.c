#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    char c1;

    printf("Introduzca un carácter: ");
    scanf(" %c", &c1);

    if (('a' <= c1 && c1 <= 'z') || ('A' <= c1 && c1 <= 'Z'))
        printf("Es letra\n");
    else if (c1 == '.')
        printf("Es punto\n");
    else
        printf("Error\n");
}

#include <stdio.h>
#include <windows.h>

const char simb = 'x';

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num;
    printf("Introduzca un número: ");
    scanf(" %d", &num);
    while (num <= 0)
    {
        printf("Introduzca un número: ");
        scanf(" %d", &num);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
           printf("%c", simb);
        }
        printf("\n");
    }
}

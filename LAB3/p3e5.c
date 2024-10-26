#include <stdio.h>
#include <windows.h>

const char simb = 'x';
const char simb2 = 'o';

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
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                    printf("%c", simb);
                else
                    printf("%c", simb2);
            }
            else
            {
                if (j % 2 == 0)
                    printf("%c", simb);
                else
                    printf("%c", simb2);
            }
        }
        printf("\n");
    }
}

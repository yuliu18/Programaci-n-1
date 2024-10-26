#include <stdio.h>

int main()
{
    int num;
    printf("Introduzca un numero: ");
    scanf(" %d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((i == num - 1) || (j == num - 1) || (j == num - (i + 1)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

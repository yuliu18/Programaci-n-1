#include <stdio.h>

int main()
{
    int num1;
    printf("Introduzca un numero: ");
    scanf(" %d", &num1);

    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num1; j++)
            printf("*");
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int num;
    printf("Introduce una secuencia de números terminada en cero: ");
    scanf(" %d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
            printf(" %d", num);
        scanf(" %d", &num);
    }
}

#include <stdio.h>

int main()
{
    int num;
    int resultado = 0;
    printf("Introduce una secuencia de n�meros terminada en cero: ");
    scanf(" %d", &num);

    while (num != 0)
    {
        resultado += num;
        scanf(" %d", &num);
    }
    printf(" %d", resultado);
}

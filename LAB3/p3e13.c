#include <stdio.h>

int main()
{
    int num, mayor, menor;
    printf("Introduzca una secuencia de números (separados por espacios) terminada en cero:\n");
    scanf(" %d", &num);
    mayor = num;
    menor = num;
    int total = 0;
    int count = 0;
    double media = 0;

    if (num != 0)
    {
        while (num != 0)
        {
            total += num;
            count++;
            if (num > mayor)
                mayor = num;
            else if (num < menor)
                menor = num;
            scanf(" %d", &num);
        }
        media = (double)total / count;
        printf("Mayor: %d\n", mayor);
        printf("Menor: %d\n", menor);
        printf("Media: %lg\n", media);
    }
    else
        printf("Secuencia vacia\n");
}

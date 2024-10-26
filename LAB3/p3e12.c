#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num_a_buscar, num;
    bool ok = false;
    printf("Introduzca el numero entero a buscar (distinto de cero): ");
    scanf(" %d", &num_a_buscar);

    if (num_a_buscar != 0)
    {
        printf("Introduzca una secuencia de numeros enteros terminada en cero:\n");
        scanf(" %d", &num);
        while (num != 0)
        {
            if (num == num_a_buscar)
                ok = true;
            scanf(" %d", &num);
        }
        if (ok)
            printf("El numero %d SI aparece en la secuencia\n", num_a_buscar);
        else
        printf("El numero %d NO aparece en la secuencia\n", num_a_buscar);
    }
    else
        printf("Error\n");
}

#include <stdio.h>

int main()
{
    int num;
    int primeraPosicion = 0;
    int ultimaPosicion = 0;
    int posicion = 0;
    printf("Introduzca una secuencia de numeros terminada en cero:\n");
    scanf(" %d", &num);
    while (num != 0)
    {
        posicion++;
        if (num == 12) {
            if (primeraPosicion == 0) {
                primeraPosicion = posicion; // Primera aparición de 12
            }
            ultimaPosicion = posicion; // Actualizar la última aparición de 12
        }
        scanf(" %d", &num);
    }
    printf("Primera posicion: %d\n", primeraPosicion);
    printf("Ultima posicion: %d\n", ultimaPosicion);
}



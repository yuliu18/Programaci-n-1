#include <stdio.h>
#include <windows.h>

const int UNIDAD1 = 100;
const int UNIDAD2 = 95;
const int UNIDAD3 = 90;
const int UNIDAD4M = 85;

int main()
{
    int cantidad;
    int precio = 0;

    printf("Introduzca la cantidad: ");
    scanf(" %d", &cantidad);

    switch(cantidad){
    case 1:
        precio = cantidad * UNIDAD1;
        break;
    case 2:
        precio = cantidad * UNIDAD2;
        break;
    case 3:
        precio = cantidad * UNIDAD3;
        break;
    default:
        precio = cantidad * UNIDAD4M;
        break;
    }

    printf("El importe es: %d", precio);
}

#include <stdio.h>
#include <windows.h>

const double IVA = 0.12;
const double DS_5 = 0.05;

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int unidad;
    double precio, precio_total, precio_total_iva;

    printf("Introduzca la cantidad de unidades adquiridas: ");
    scanf(" %d", &unidad);
    printf("Introduzca el precio de una unidad: ");
    scanf(" %lg", &precio);

    precio_total = unidad * precio;
    precio_total_iva = precio_total + (precio_total * IVA);

    if(precio_total_iva >= 300)
    {
        precio_total_iva = precio_total_iva - (precio_total_iva * DS_5);
        printf("Se aplica descuento del 5%%\n");
    }

    printf("El precio total a pagar es: %lg €", precio_total_iva);
}

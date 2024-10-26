#include <stdio.h>
#include <windows.h>

const double G_F = 1;
const double T_05 = 0.5;
const double T_035 = 0.35;
const double RESTO = 0.25;
const double KWH_100 = 100;
const double KWH_150 = 150;

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    double  precio, contador1;
    int contador;
    printf("Introduzca el consumo del contador: ");
    scanf(" %d", &contador);

    contador1 = contador;

    if(contador1 < KWH_100)
    {
        precio = (contador1 * T_05) + G_F;
    }
    else
    {
        precio = (KWH_100 * T_05) + G_F;
        contador1 -= KWH_100;

        if (contador1 < KWH_150)
        {
            precio = precio + (contador1 * T_035);
            contador1 = 0;
        }
        else
        {
            precio = precio + (KWH_150 * T_035);
            contador1 -= KWH_150;
        }
        if (contador1 > 0)
        {
            precio = precio + (contador1 * RESTO);
        }
    }
    printf("Consumo: %d Kwh. Importe: %lg €", contador, precio);
}


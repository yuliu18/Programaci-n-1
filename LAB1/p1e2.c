#include <stdio.h>
#include <stdbool.h>
 //-----------------------------------
 const double TASA = 25.3;
 const double PRECIO_HORA = 60.75;
 //-----------------------------------
int main()
{
    double horas, dias, total, neto;
    printf("Introduzca las horas trabajadas: ");
    scanf(" %lg", &horas);
    printf("Introduzca los dias trabajados: ");
    scanf(" %lg", &dias);
    total = horas * dias * PRECIO_HORA;
    neto = total- TASA;
    printf("El valor total a pagar es: %lg\n", total);
    printf("El valor neto a pagar es: %lg\n", neto);
}

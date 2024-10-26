#include <stdio.h>

const double EXTRA = 6.0;

int main()
{
    double salario;
    int anos;
    double bruto;
    double neto;

    printf("Introduzca Sueldo Base y Antigüedad: ");
    scanf(" %lg %d", &salario, &anos);

    bruto = salario + (anos * EXTRA);
    neto = bruto - (bruto * 0.25);
    printf("El salario bruto es: %lg\n", bruto);
    printf("El salario bruto es: %lg\n", neto);
}

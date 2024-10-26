#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const double PI = 3.1416;
const double PI_R = 180;

int main()
{
    double grados;
    double radianes;
    printf("Introduzca el angulo (grados): ");
    scanf(" %lg", &grados);
    radianes = grados * (PI / PI_R);
    printf(" El angulo en radianes es: %lg\n", radianes);

}

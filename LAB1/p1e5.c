#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const double PI = 3.1416;
const double PI_R = 180;
const double MIN_G = 60;
const double SEG_MIN = 60;

int main()
{
    int grados;
    double radianes;
    int min;
    int seg;
    double total;
    printf("Introduzca el angulo (grados): ");
    scanf(" %d %d %d", &grados, &min, &seg);

    total = grados + (min/MIN_G) + (seg/(SEG_MIN*MIN_G));
    radianes = total * (PI / PI_R);
    printf(" El angulo en radianes es: %lg\n", radianes);

}

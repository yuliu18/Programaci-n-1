#include <stdio.h>
#include <windows.h>

const int H_A_MIN = 60;

int main()
{
    int horas, min;
    int total1, total2, MIN, HORA, diff_total;
    int horas2, min2;

    printf("Introduzca primer instante (horas y minutos): ");
    scanf(" %i %i", &horas, &min);

    printf("Introduzca segundo instante (horas y minutos): ");
    scanf(" %i %i", &horas2, &min2);

    total1 = horas * H_A_MIN + min;
    total2 = horas2 * H_A_MIN + min2;

    diff_total = total2 - total1;
    HORA = diff_total / H_A_MIN;
    MIN = diff_total % H_A_MIN;

    printf("La diferencia es: %i horas y %i minutos", HORA, MIN);

}

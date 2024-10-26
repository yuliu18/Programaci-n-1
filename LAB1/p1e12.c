#include <stdio.h>

const int D_A_S = 7;
const int H_A_D = 24;
const int TIEM = 60;

int main()
{
    int totalse, resto;

    printf("Introduzca los segundos: ");
    scanf(" %i", &totalse);

    int semanas = totalse / (TIEM*TIEM*H_A_D*D_A_S);
    resto = totalse % (TIEM*TIEM*H_A_D*D_A_S);
    int dias = resto / (TIEM*TIEM*H_A_D);
    resto = resto % (TIEM*TIEM*H_A_D);
    int horas = resto / (TIEM*TIEM);
    resto = resto % (TIEM*TIEM);
    int min = resto / TIEM;
    int seg = resto % TIEM;

    printf("%i segundos equivalen a [%2i] semanas, %i dias %02i:%02i:%02i\n", totalse, semanas, dias, horas, min, seg);
}

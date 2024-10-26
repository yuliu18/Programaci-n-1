#include <stdio.h>

int main()
{
    int Num1;
    int Num2;
    int intercambio;

    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &Num1, &Num2);

    intercambio = Num2;
    Num2 = Num1;
    Num1 = intercambio;

    printf (" Num1 = %d y Num2 = %d\n", Num1, Num2);
}

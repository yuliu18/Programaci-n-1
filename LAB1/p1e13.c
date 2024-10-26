#include <stdio.h>

const double N_TEORIA = 0.7;
const double N_PRACTICA = 0.3;

int main()
{
    double notat, notap;
    double notat1, notap1;
    double total;


    printf("Introduzca la nota de teoria: ");
    scanf(" %lg", &notat);
    printf("Introduzca la nota de practicas: ");
    scanf(" %lg", &notap);

    notat1 = notat * N_TEORIA;
    notap1 = notap * N_PRACTICA;
    total = notat1 + notap1;

    printf("La calificacion es: %lg", total);



}

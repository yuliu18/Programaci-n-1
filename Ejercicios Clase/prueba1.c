#include <stdio.h>

const int conver_Kg_g = 1000;
int main()
{
    int gramos;
    int gramos_intro;
    int kg;
    int Tonelada;
    printf("Introduzca la cantidad de gramos: ");
    scanf(" %d", &gramos_intro);
    Tonelada = gramos_intro / (conver_Kg_g*conver_Kg_g); //cociente
    kg = (gramos_intro % (conver_Kg_g*conver_Kg_g)) / conver_Kg_g; // resto entre 1000
    gramos = (gramos_intro % conver_Kg_g) % conver_Kg_g; // resto
    printf(" %d gr equivalen a %d Tn, %d Kg, %d gr", gramos_intro, Tonelada, kg, gramos);
}

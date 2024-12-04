#include <stdio.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1,
};

int buscar(int maxcars, char par1[maxcars], char valor, bool* ok)
{
    int i = 0;
    *ok = false;
    while(i < maxcars - 1 && par1[i] != valor)
    {
        i++;
    }
    if(par1[i] == valor)
    {
        *ok = true;
    }
    return i;
}

void leer_palabra(int maxcars, char par1[maxcars], char par2[maxcars])
{
    printf("Introduzca dos palabras: ");
    scanf(" %63s", par1);
    scanf(" %63s", par2);
}

void letra_inicial(int maxcars, char par1[maxcars], char par2[maxcars])
{
    bool ok = false;
    int i = buscar(MAXCARS, par2, par1[0], &ok);
    if(ok)
    {
        printf("La letra inicial de la primera palabra SI aparece en la segunda palabra, en la posicion %d.", i);
    }
    else
    {
        printf("La letra inicial de la primera palabra NO aparece en la segunda palabra.");
    }
}

int main()
{
    char par1[MAXCARS];
    char par2[MAXCARS];
    leer_palabra(MAXCARS, par1, par2);
    letra_inicial(MAXCARS, par1, par2);
}

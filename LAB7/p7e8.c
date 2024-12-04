#include <stdio.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1
};

void leer_palabras(char pal1[], char pal2[])
{
    printf("Introduzca dos palabras: ");
    scanf(" %63s", pal1);
    scanf(" %63s", pal2);
}

int es_subcadena(int maxcars, char pal1[maxcars], const char pal2[maxcars])
{
    int i = 0;
    int posicion = -1;

    while (pal2[i] != '\0' && posicion == -1)
    {
        int j = 0;
        int k = i;
        while (pal1[j] != '\0' && pal2[k] != '\0' && pal1[j] == pal2[k])
        {
            j++;
            k++;
        }
        if (pal1[j] == '\0')
        {
            posicion = i;
        }
        else
        {
            i++;
        }
    }
    return posicion;
}

int main()
{
    char pal1[MAXCARS];
    char pal2[MAXCARS];
    leer_palabras(pal1, pal2);
    int posicion = es_subcadena(MAXCARS,pal1, pal2);

    if (posicion != -1)
    {
        printf("La primera palabra SI es una subcadena contenida en la segunda palabra, en la posicion %d.\n", posicion);
    }
    else
    {
        printf("La primera palabra NO es una subcadena contenida en la segunda palabra.\n");
    }
}


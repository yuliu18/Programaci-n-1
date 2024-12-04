#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1,
    MAX_LONG = 10,
};

bool buscar(int max, int longitud[max], int valor)
{
    int i = 0;
    bool ok = true;
    while(i < max - 1 && longitud[i] != '\0' && longitud[i] != valor)
    {
        i++;
    }
    if(longitud[i] == valor)
        ok = false;
    return ok;

}

int buscar_repe(int max, int longitud[max], int valor)
{
    int i = 0;
    while(i < max && longitud[i] != valor)
    {
        i++;
    }
    return i;
}

void mostrar_resultado(int max, int longitudes[max], int repeticiones[max])
{
    printf("Longitudes Repeticiones\n");
    for(int i = 0; i < max; i++)
    {
        printf("%d          %d\n", longitudes[i], repeticiones[i]);
    }
}

void procesar_palabras(int maxcars, char palabra[maxcars])
{
    int i = 0;
    int j = 0;
    int longitudes[MAX_LONG] = {0};
    int repeticiones[MAX_LONG] = {0};
    printf("Introduzca el texto en minúsculas hasta (fin): \n");
    scanf(" %63s", palabra);
    while (strcmp(palabra, "fin") != 0)
    {
        if(i < MAX_LONG - 1 && buscar(MAX_LONG, longitudes, strlen(palabra)))
        {
            longitudes[i] = strlen(palabra);
            i++;
        }
        j = buscar_repe(MAX_LONG, longitudes, strlen(palabra));
        repeticiones[j]++;
        scanf(" %63s", palabra);
    }
    mostrar_resultado(i, longitudes, repeticiones);
}

int main()
{
    char palabra[MAXCARS];
    procesar_palabras(MAXCARS, palabra);

}

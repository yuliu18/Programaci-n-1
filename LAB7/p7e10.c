#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum{
    MAXCARS = 63 + 1,
};

void ordenar_palabra(char palabra[])
{
    int longitud = strlen(palabra);
    int i, j;
    char temp;
    for (i = 0; i < longitud - 1; i++)
    {
        for (j = i + 1; j < longitud; j++)
        {
            if (palabra[i] > palabra[j])
            {
                temp = palabra[i];
                palabra[i] = palabra[j];
                palabra[j] = temp;
            }
        }
    }
}

bool es_anagrama(int maxcars, char palabra1[maxcars], char palabra2[maxcars])
{
    bool ok = false;
    if(strlen(palabra1) == strlen(palabra2))
    {
        char copia1[MAXCARS];
        char copia2[MAXCARS];
        strcpy(copia1, palabra1);
        strcpy(copia2, palabra2);

        ordenar_palabra(copia1);
        ordenar_palabra(copia2);
        if(strcmp(copia1, copia2) == 0)
            ok = true;
        else
            ok = false;
    }
    return ok;
}

int main()
{
    int count = 0;
    char palabra1[MAXCARS];
    printf("Introduzca el texto en minúsculas hasta (fin): \n");
    scanf(" %63s", palabra1);

    char palabra2[MAXCARS];
    scanf(" %63s", palabra2);
    while (strcmp(palabra2, "fin") != 0)
    {
        if(es_anagrama(MAXCARS, palabra1, palabra2))
            count++;
        scanf(" %63s", palabra2);
    }
    printf("En este texto hay %d anagramas como <%s>.", count, palabra1);
}

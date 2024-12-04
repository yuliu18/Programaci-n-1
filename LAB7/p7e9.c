#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum{
    MAXCARS = 63 + 1,
};

bool encontrado(int maxcars, char par1[maxcars], char valor)
{
    int i = 0;
    bool ok = false;
    while(i < maxcars - 1 && par1[i] != valor)
    {
        i++;
    }
    if(par1[i] == valor)
    {
        ok = true;
    }
    return ok;
}

int main()
{
    char palabra1[MAXCARS];
    printf("Introduzca el texto en minúsculas hasta (fin): ");
    scanf(" %63s", palabra1);
    char palabra2[MAXCARS];
    scanf(" %63s", palabra2);
    while (strcmp(palabra2, "fin") != 0)
    {
        if(encontrado(MAXCARS, palabra1, palabra2[0]))
            printf("%s ", palabra2);
        scanf(" %63s", palabra2);
    }
}

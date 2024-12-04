#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1,
    MAXP = 15,
};

struct Palabra{
    int nlms;
    char palabra[MAXCARS];
    int posicion[MAXP];
};

struct LPalabra{
    int nelms;
    struct Palabra elm[MAXP];
};

bool existe(int maxcars, char palabra[maxcars], struct LPalabra* pls)
{
    int i = 0;
    bool ok = false;
    while(i < pls->nelms && !ok)
    {
        if(strcmp(pls->elm[i].palabra, palabra) == 0)
            ok = true;
        i++;
    }
    return ok;
}

int existe_repe(int maxcars, char palabra[maxcars], struct LPalabra* pls)
{
    int i = 0;
    int posicion = -1;
    while(i < pls->nelms && posicion == -1)
    {
        if(strcmp(pls->elm[i].palabra, palabra) == 0)
            posicion = i;
        i++;
    }
    return posicion;
}

void procesar_secuencia(struct LPalabra* pls)
{
    int i = 1;
    int j = 0;
    pls->nelms = 0;
    char palabra[MAXCARS];
    printf("Introduzca el texto en minúsculas hasta (fin): \n");
    scanf(" %63s", palabra);
    while (strcmp(palabra, "fin") != 0)
    {
        if(!existe(MAXCARS, palabra, pls) && pls->nelms < MAXP)
        {
            strcpy(pls->elm[pls->nelms].palabra, palabra);
            pls->elm[pls->nelms].posicion[0] = i;
            pls->elm[pls->nelms].nlms = 1;
            pls->nelms++;
        }
        else
        {
            j = existe_repe(MAXCARS, palabra, pls);
            if (j != -1 && pls->elm[j].nlms < MAXP)
            {
                pls->elm[j].posicion[pls->elm[j].nlms] = i;
                pls->elm[j].nlms++;
            }
        }
        scanf(" %63s", palabra);
        i++;
    }
}

void mostrar_secuencia(const struct LPalabra* pls)
{
    for(int i = 0; i < pls->nelms; i++)
    {
        printf("%s ", pls->elm[i].palabra);
        for(int j = 0; j < pls->elm[i].nlms; j++)
        {
            printf("%d ", pls->elm[i].posicion[j]);
        }
        printf("\n");
    }
}

int main()
{
    struct LPalabra pls;
    procesar_secuencia(&pls);
    mostrar_secuencia(&pls);
}

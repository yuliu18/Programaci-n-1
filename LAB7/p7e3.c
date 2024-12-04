#include <stdio.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1,
};

void leer(int maxcars, char texto[maxcars])
{
    printf("Introduzca un texto: ");
    for(int i = 0; i < maxcars; i++)
    {
        scanf("%63[^\n]", &texto[i]);
    }
}

void mostrar_texto (int maxcars, char texto[maxcars])
{
    printf("Texto original: %s\n", texto);
}

bool es_vocal(char c)
{
    return  (c == 'a') || (c == 'e') || (c == 'i')
                || (c == 'o') || (c == 'u');
}

void mostrar_resultado(int maxcars, char texto[maxcars], int nelms)
{
    printf("Texto resultado: ");
    for(int i = 0; i < nelms; i++)
    {
        printf("%c", texto[i]);
    }
}

void eliminar_vocales(int maxcars, char texto[maxcars])
{
    int j = 0;
    for (int i = 0; (i < maxcars) && texto[i] != '\0'; ++i)
    {
        if (!es_vocal(texto[i]))
        {
            texto[j] = texto[i];
            ++j;
        }
    }
    mostrar_resultado(maxcars, texto, j);
}

int main()
{
    char texto[MAXCARS];
    leer(MAXCARS, texto);
    mostrar_texto(MAXCARS, texto);
    eliminar_vocales(MAXCARS, texto);
}

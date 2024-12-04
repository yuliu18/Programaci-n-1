#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum {
    MAXCARS = 63 + 1,
    MAX = 10,
};

bool es_patron(int maxcars, char pal1[maxcars], char pal2[maxcars])
{
    int i = 0;
    bool encontrado = false;

    while (pal2[i] != '\0' && !encontrado)
    {
        int j = 0;
        int k = i;
        while (pal1[j] != '\0' && pal2[k] != '\0' && pal1[j] == pal2[k])
        {
            j++;
            k++;
        }
        if (pal1[j] == '\0')
            encontrado = true;
        else
            i++;
    }
    return encontrado;
}

void leer_patron(int maxcars, char patron[maxcars])
{
    printf("Introduzca el patrón en minúsculas: ");
    scanf("%63s", patron);
}


bool ya_existe(int num_resultados, char respuesta[MAX][MAXCARS], char palabra[MAXCARS])
{
    bool ok = false;
    for (int i = 0; i < num_resultados; i++)
    {
        if (strcmp(respuesta[i], palabra) == 0)
            ok = true;
    }
    return ok;
}

void procesar_secuencia(int maxcars, char patron[maxcars]) {
    char palabra[maxcars];
    char respuesta[MAX][maxcars];
    int num_resultados = 0;

    printf("Introduzca el texto en minúsculas hasta (fin): \n");
    scanf("%63s", palabra);
    while (strcmp(palabra, "fin") != 0 && num_resultados < MAX)
    {
        if (es_patron(maxcars, patron, palabra))
        {
            if (!ya_existe(num_resultados, respuesta, palabra))
            {
                strcpy(respuesta[num_resultados], palabra);
                num_resultados++;
            }
        }
        scanf("%63s", palabra);
    }
    printf("Resultado:\n");
    for (int i = 0; i < num_resultados; i++)
        printf("%s ", respuesta[i]);
    printf("\n");
}

int main() {
    char patron[MAXCARS];
    leer_patron(MAXCARS, patron);
    procesar_secuencia(MAXCARS, patron);
}

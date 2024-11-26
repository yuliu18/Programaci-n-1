#include <stdio.h>

enum{
    MAX = 20,
};

struct Lista{
    int nelms;
    double elm[MAX];
};

void leer_numeros(struct Lista* lista)
{
    for (int i = 0; i < lista->nelms; i++)
        scanf(" %lg", &lista->elm[i]);
}

void leer_lista(struct Lista* lista)
{
    printf("Introduzca cantidad de numeros (maximo 20): ");
    scanf("%d", &lista->nelms);
    if (lista->nelms > MAX && lista->nelms <= 0)
        printf("Error.\n");
    else
    {
        printf("Introduzca los %d numeros: ", lista->nelms);
        leer_numeros(lista);
    }
}

void mostrar_lista(struct Lista* list)
{
    printf("Lista: [ ");
    for (int i = 0; i < list->nelms; i++)
        printf("%lg ", list->elm[i]);
    printf("]\n");
}

double calcular_media(struct Lista* lista)
{
    double media, suma_total;
    for (int i = 0; i < lista->nelms; i++)
    {
        suma_total += lista->elm[i];
    }
    media = suma_total / lista->nelms;
    return media;
}

void eliminar_menores(struct Lista* lista, double umbral)
{
    int j = 0;
    for (int i = 0; i < lista->nelms; i++)
    {
        if(lista->elm[i] >= umbral)
        {
            lista->elm[j++] = lista->elm[i];
        }
    }
    lista->nelms = j;
}

void resultado(struct Lista* lista)
{
    int elementos_eliminados;
    int nelms_anterior;
    do {
        mostrar_lista(lista);
        double media = calcular_media(lista);
        printf("Media: %lg\n", media);
        nelms_anterior = lista->nelms;
        eliminar_menores(lista, media);
        elementos_eliminados = nelms_anterior - lista->nelms;
    } while (elementos_eliminados > 0);
}

int main()
{
    struct Lista list;
    leer_lista(&list);
    resultado(&list);
}

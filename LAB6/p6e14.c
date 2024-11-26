#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 20,
};

struct Lista{
    int nelms;
    int elm[MAX];
};

void leer_lista(struct Lista* lista)
{
    int num;
    printf("Introduzca una secuencia de números ordenados (hasta negativo): ");
    scanf(" %d", &num);
    lista->nelms = 0;
    while (num > 0 && lista->nelms < MAX)
    {
        if (lista->nelms < MAX)
        {
            lista->elm[lista->nelms] = num;
            lista->nelms++;
        }
        scanf(" %d", &num);
    }
}

void mostrar_lista(const struct Lista* lista)
{
    printf("La lista: [ ");
    for(int i = 0; i < lista->nelms; i++)
    {
        printf("%d ", lista->elm[i]);
    }
    printf("]\n");
}

bool es_ordenado(const struct Lista* list)
{
    bool ok = true;
    for(int i = 1; i < list->nelms; i++)
    {
        if(list->elm[i] < list->elm[i - 1])
            ok = false;
    }
    return ok;
}

void mezclar(const struct Lista* v1, const struct Lista* v2, struct Lista* v3)
{
    if(es_ordenado(v1) && es_ordenado(v2))
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < v1->nelms && j < v2->nelms && k < MAX)
        {
            if(v1->elm[i] < v2->elm[j])
            {
                v3->elm[k++] = v1->elm[i++];
            }
            else
            {
                v3->elm[k++] = v2->elm[j++];
            }
        }
        while(i < v1->nelms && k < MAX)
        {
            v3->elm[k++] = v1->elm[i++];
        }
        while(j < v2->nelms && k < MAX)
        {
            v3->elm[k++] = v2->elm[j++];
        }
        v3->nelms = k;
        mostrar_lista(v3);
    }
    else
    {
        printf("Error, las listas no estan ordenadas.\n");
        v3->nelms = 0;
    }
}

int main()
{
    struct Lista v1;
    struct Lista v2;
    struct Lista resultado;
    leer_lista(&v1);
    leer_lista(&v2);
    mostrar_lista(&v1);
    mostrar_lista(&v2);
    mezclar(&v1, &v2, &resultado);

}

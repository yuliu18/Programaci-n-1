#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 20,
    MAXNUM = 10,
};

struct Lista{
    int nelms;
    int elm[MAX];
};

void leer_lista(struct Lista* lista)
{
    int num;
    printf("Introduzca una secuencia de digitos (hasta negativo): ");
    scanf(" %d", &num);
    lista->nelms = 0;
    while(num >= 0 && (lista->nelms < MAX))
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

void moda(const struct Lista* lista, bool* ok, int* md)
{
    int maxfrecuencia = 0;
    int maxdigito = 0;
    int moda_repetida = 0;
    int frecuencia[MAXNUM] = {0};
    for(int i = 0; i < lista->nelms; i++)
    {
        int digito = lista->elm[i];
        frecuencia[digito]++;
        if(frecuencia[digito] > maxfrecuencia)
        {
            maxfrecuencia = frecuencia[digito];
            maxdigito = digito;
            moda_repetida = 0;
        }
        else if (frecuencia[digito] == maxfrecuencia)
        {
            moda_repetida = 1;
        }
    }
    if (moda_repetida == 1 || maxfrecuencia == 1)
        *ok = false;
    else
    {
        *ok = true;
        *md = maxdigito;
    }
}

int main()
{
    struct Lista list;
    bool ok;
    int md;
    leer_lista(&list);
    mostrar_lista(&list);
    moda(&list, &ok, &md);
    if(ok)
        printf("La moda es: %d", md);
    else
        printf("NO tiene moda");
}

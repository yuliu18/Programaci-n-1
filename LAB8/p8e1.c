#include <stdio.h>
#include <stdlib.h>

struct NUM{
    int cantidad;
    int* elm;
};

void leer_valor(struct NUM* n)
{
    printf("Introduzca total de numeros: ");
    scanf("%d", &n->cantidad);
    if (n->cantidad <= 0)
    {
        n->cantidad = 0,
        printf("Error.\n");
    }
    else
    {
        n->elm = calloc(n->cantidad, sizeof(int));
        printf("Introduzca %d numeros: \n", n->cantidad);
        for(int i = 0; i < n->cantidad; i++)
            scanf("%d", &n->elm[i]);
    }
}

double calc_media(const struct NUM* n)
{
    double suma_total = 0;
    for (int i = 0; i < n->cantidad; i++)
    {
        suma_total += n->elm[i];
    }
    return suma_total/n->cantidad;
}

int resultado(const struct NUM* n, double media)
{
    int resultado = 0;
    for(int i = 0; i < n->cantidad; i++)
    {
        if(n->elm[i] >= media)
            resultado += n->elm[i];
    }
    return resultado;
}

void liberar(struct NUM* n)
{
    free(n->elm);
    n->cantidad = 0;
    n->elm = NULL;
}

int main()
{
    struct NUM n;
    leer_valor(&n);
    double media = calc_media(&n);
    int result = resultado(&n, media);
    printf("Resultado: %d", result);
    liberar(&n);
}

#include <stdio.h>
#include <stdlib.h>

struct Datos{
    int capacidad;
    int nelms;
    int* elm;
};

void inic_valor(struct Datos* dts)
{
    dts->nelms = 0;
    dts->capacidad = 4;
    dts->elm = calloc(dts->capacidad, sizeof(int));
}

void anyadir_valor(int valor, struct Datos* dts)
{
    if(dts->nelms == dts->capacidad)
    {
        dts->capacidad *= 2;
        dts->elm = realloc(dts->elm, dts->capacidad*sizeof(int));
    }
    *(dts->elm + dts->nelms) = valor;
    dts->nelms++;
}

void leer_valor(struct Datos* dts)
{
    int num = 0;
    inic_valor(dts);
    printf("Introduzca secuencia de numeros (negativo para fin): \n");
    scanf("%d", &num);
    while(num >= 0)
    {
        anyadir_valor(num, dts);
        scanf("%d", &num);
    }
}

double calc_media(const struct Datos* n)
{
    double suma_total = 0;
    for (int* p = n->elm; p < (n->elm + n->nelms); p++)
    {
        suma_total += *p;
    }
    return suma_total/n->nelms;
}

int resultado(const struct Datos* n, double media)
{
    int resultado = 0;
    for(int* p = n->elm; p < (n->elm + n->nelms); p++)
    {
        if(*p >= media)
            resultado += *p;
    }
    return resultado;
}

void liberar(struct Datos* n)
{
    free(n->elm);
    n->capacidad = 0;
    n->nelms = 0;
    n->elm = NULL;
}

int main()
{
    struct Datos dts;
    leer_valor(&dts);
    double media = calc_media(&dts);
    int result = resultado(&dts, media);
    printf("Resultado: %d", result);
    liberar(&dts);
}

#include <stdio.h>
#include <stdlib.h>

struct Datos{
    int capacidad;
    int nelms;
    double* elm;
};

void inic_lista(struct Datos* dts)
{
    dts->capacidad = 4;
    dts->nelms = 0;
    dts->elm = calloc(dts->capacidad,sizeof(double));
}

void anyadir_valor(double valor, struct Datos* dts)
{
    if(dts->nelms == dts->capacidad)
    {
        dts->capacidad *= 2;
        dts->elm = realloc(dts->elm, sizeof(double));
    }
    dts->elm[dts->nelms] = valor;
    dts->nelms++;
}

void leer_notas(struct Datos* dts)
{
    double valor;
    inic_lista;
    printf("Introduce nota alumno %d: ", lista->nelms);
    scanf("%lg", valor);
    while(valor >= 0)
    {
        anyadir_valor(valor, dts);
        printf("Introduce nota alumno %d: ", lista->nelms);
        scanf("%lg", valor);
    }
}



int main()
{
    struct Datos dts;
    //uso de realloc;
}

#include <stdio.h>

enum{
    MAX = 5,
};

void leer(int nelem, double nota[nelem])
{
    printf("Introduzca 5 números: ");
    for(int i = 0; i < nelem; i++)
        scanf("%lg", &nota[i]);
}

double buscar_mayor(int nelms, const double lista[nelms])
{
    double mayor = lista[0];
    for(int i = 1; i < nelms; i++)
    {
        if(mayor < lista[i])
            mayor = lista[i];
    }
    return mayor;
}

void mostrar_lista(int nelms, const double lista[nelms])
{
    printf("Lista: ");
    for(int i = 0; i < nelms; i++)
        printf("%lg ", lista[i]);
}

void mostrar(double resultado)
{
    printf("El mayor elemento de la lista es %lg\n", resultado);

}

int main()
{
    double nota[MAX];
    leer(MAX, nota);
    double resultado = buscar_mayor(MAX, nota);
    mostrar(resultado);
    mostrar_lista(MAX, nota);

}

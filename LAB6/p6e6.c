#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 10,
};

void leer_secuencia(int nelms, int lista[nelms])
{
    printf("Introduzca 10 numeros (al menos dos iguales y dos distintos): \n");
    for (int i = 0; i < nelms; i++)
    {
        scanf(" %d", &lista[i]);
    }
}

int elm_minimo(int nelms, int list[nelms])
{
    int menor;
    for (int i = 0; i < nelms; i++)
    {
        if(list[i] < menor)
            menor = list[i];
    }
    return menor;
}

void mostrar_lista(int nelms, int list[nelms])
{
    printf("Lista: ");
    for(int i = 0; i < nelms; i++)
        printf("%d ", list[i]);
    printf("\n");
}

int posicion(int nelms, int list[nelms])
{
    int menor = elm_minimo(nelms, list);
    int i = 0;
    while(list[i] < menor)
    {
        ++i;
    }
    return i;
}

int main()
{
    int list[MAX];
    leer_secuencia(MAX, list);
    mostrar_lista(MAX, list);
    printf("El elemento %d es mayor que el minimo de la lista", list[posicion(MAX, list)]);

}

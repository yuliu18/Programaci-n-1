#include <stdio.h>

enum{
    MAX = 20,
};

struct Lista {
    int nelms;
    int elem[MAX];
};

int buscar(const struct Lista* lista, int valor)
{
    int i = 0;
    while((i < lista->nelms) && (lista->elem[i] != valor))
    {
        i++;
    }
    if (i == lista->nelms)
        i = -1;
    return i;
}

void anyadir(struct Lista* lista, int x)
{
    if (lista->nelms < MAX)
    {
        lista->elem[lista->nelms] = x;
        lista->nelms++;
    }
}

void leer_lista(struct Lista* lista)
{
    int num;
    printf("Introduzca una secuencia de números terminada en cero: \n");
    scanf(" %d", &num);
    lista->nelms = 0;
    while (num != 0 && lista->nelms < MAX)
    {
        anyadir(lista, num);
        scanf(" %d", &num);
    }
}

void mostrar_lista(const struct Lista* lista)
{
    printf("Lista: [");
    for (int i = 0; (i < lista->nelms); i++)
    {
        printf("%d ", lista->elem[i]);
    }
    printf("]\n");
}

void eliminar(struct Lista* lista, int valor)
{
    int pos = buscar(lista, valor);
    if (0 <= pos && pos < lista->nelms)
    {
        lista->elem[pos] = lista->elem[lista->nelms-1];
        --lista->nelms;
    }
}

void mostrar_resultado(struct Lista* lista)
{
    int num;
    printf("Introduzca un numero a eliminar: ");
    scanf(" %d", &num);
    mostrar_lista(lista);
    printf("Eliminar: %d\n", num);
    eliminar(lista, num);
    mostrar_lista(lista);
}

int main()
{
    struct Lista list;
    leer_lista(&list);
    mostrar_resultado(&list);

}

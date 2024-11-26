#include <stdio.h>

enum{
    MAX = 20,
};

struct Lista {
    int nelms;
    int elem[MAX];
};

 int buscar_posicion(const struct Lista* lista, int valor)
 {
    int i = 0;
    while ((i < lista->nelms)&&(valor >= lista->elem[i]))
    {
        ++i;
    }
    return i;
 }

 void anyadir_ord(struct Lista* lista, int x)
 {
    if (lista->nelms < MAX)
    {
        int pos = buscar_posicion(lista, x);
        for (int i = lista->nelms-1; i >= pos;--i)
        {
            lista->elem[i+1] = lista->elem[i];
        }
        lista->elem[pos] = x;
        ++lista->nelms;
    }
 }

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

void eliminar_ord(struct Lista* lista, int x)
 {
    int pos = buscar(lista, x);
    if (0 <= pos && pos < lista->nelms)
    {
        for (int i = pos+1; i < lista->nelms; ++i)
        {
            lista->elem[i-1] = lista->elem[i];
        }
        --lista->nelms;
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
        anyadir_ord(lista, num);
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



void mostrar_resultado(struct Lista* lista)
{
    int num;
    printf("Introduzca un numero a eliminar: ");
    scanf(" %d", &num);
    mostrar_lista(lista);
    printf("Eliminar: %d\n", num);
    eliminar_ord(lista, num);
    mostrar_lista(lista);
}

int main()
{
    struct Lista list;
    leer_lista(&list);
    mostrar_resultado(&list);

}

#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 10,
};

struct Lista{
    int nelms;
    int elm[MAX];
};

void leer_lista(struct Lista* list)
{
    printf("Cuantos numeros desea introducir (maximo 10): ");
    scanf(" %d", &list->nelms);
    if (list->nelms > MAX && list->nelms < 0)
        printf("Error.\n");
    else
    {
        printf("Introduzca %d numeros: ", list->nelms);
        for (int i = 0; i < list->nelms; i++)
        {
            scanf(" %d", &list->elm[i]);
        }
    }
}

int repeticion(const struct Lista* list, int num)
{
    int count = 0;
    for (int i = 0; i < list->nelms; i++)
    {
        if (list->elm[i] == num)
            count++;
    }
    return count;
}

bool es_criba(const struct Lista* list, int x, int i)
{
    return repeticion(list, list->elm[i]) == x;
}

bool existe_en_lista(const struct Lista* list, int num)
{
    bool ok = false;
    for(int i = 0; i < list->nelms; i++) {
        if(list->elm[i] == num)
            ok = true;
    }
    return ok;
}

void criba(const struct Lista* list, struct Lista* list1, int x)
{
    list1->nelms = 0;

    for (int i = 0; i < list->nelms; i++)
    {
        if (es_criba(list, x, i) && !existe_en_lista(list1, list->elm[i]))
        {
            list1->elm[list1->nelms++] = list->elm[i];
        }
    }
}

void mostrar_lista(const struct Lista* list)
{
    printf("La lista cribada es: ");
    for(int i = 0; i < list->nelms; i++)
        printf("%d ", list->elm[i]);
}

int main()
{
    struct Lista list;
    struct Lista result;
    int x;
    leer_lista(&list);
    printf("Introduzca el numero de repeticiones para realizar la criba: ");
    scanf(" %d", &x);
    criba(&list, &result, x);
    mostrar_lista(&result);
}

#include <stdio.h>

enum{
    MAX = 10,
};

void leer_array(int nelms, int list[nelms])
{
    printf("Introduzca 10 numeros enteros: ");
    for (int i = 0; i < nelms; i++)
        scanf(" %d", &list[i]);
}

void mostrar(int nelms, int list[nelms])
{
    for (int i = 0; i < nelms; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void array_inverso (int nelms, int list[])
{
    int tmp;
    for (int i = 0; i < nelms / 2; i++)
    {
        tmp = list[i];
        list[i] = list[nelms - i - 1];
        list[nelms - i - 1] = tmp;
    }
}

void inverso_original (int fin, int inicial, int list[])
{
    if (fin > inicial)
    {
        int temp = list[inicial];
        list[inicial] = list[fin];
        list[fin] = temp;
        inverso_original(fin - 1, inicial + 1, list);
    }

}

void resultado(int MAX, int list[])
{
    printf("Esos numeros en orden original son: ");
    mostrar(MAX, list);
    array_inverso (MAX, list);
    printf("Esos numeros en orden inverso son: ");
    mostrar(MAX, list);
    inverso_original(MAX - 1, 0, list);
    printf("Esos numeros en orden original son: ");
    mostrar(MAX, list);

}

int main()
{
    int list[MAX];
    leer_array(MAX, list);
    resultado(MAX, list);


}

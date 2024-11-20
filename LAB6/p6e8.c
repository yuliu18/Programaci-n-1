#include <stdio.h>

enum{
    MAX = 10,
};

const char aste = '*';
const char espa = ' ';
const char salto = '\n';

void leer_lista(int list[])
{
    int num = 0;
    printf("Introduzca una secuencia de numeros (hasta negativo): ");
    scanf("%d", &num);
    while(num >= 0)
    {
        if (num >= 0 && num <= 9)
            list[num]++;
        scanf("%d", &num);
    }
}

int mayor_repetido(int nelms, int list[nelms])
{
    int mayor = 0;
    for (int i = 0; i < nelms; i++)
    {
        if(list[i] > mayor)
            mayor = list[i];
    }
    return mayor;
}

void imprimir_raya(int nelms)
{
    for (int i = 0; i < nelms*2; i++)
    {
        printf("-");
    }
    printf("\n");
}

void imprimir_x(int nelms)
{
    for (int i = 0; i < nelms; i++)
    {
        printf("%d ", i);
    }
}

void imprimir_grafica(int nelms, int list[nelms])
{
    int mayor = mayor_repetido(nelms, list);
    for(int i = mayor; i > 0; --i)
    {
        for (int j = 0; j < nelms; ++j)
        {
            if ((list[j] != i) || (list[j] == 0))
                printf("%c ", espa);
            else if (list[j] == i)
            {
                printf("%c ", aste);
                list[j]--;
            }
        }
        printf("%c", salto);
    }
}

void histograma(int nelms, int list[nelms])
{
    imprimir_raya(nelms);
    imprimir_grafica(nelms, list);
    imprimir_raya(nelms);
    imprimir_x(nelms);
}

int main()
{
    int list[MAX] = {0};
    leer_lista(list);
    histograma(MAX, list);
}

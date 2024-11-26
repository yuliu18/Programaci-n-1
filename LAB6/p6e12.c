#include <stdio.h>
#include <stdbool.h>

enum{
    MAX = 31 + 1,
};

struct Alumnos{
    int nelms;
    int elem[MAX];
};

void calcular_dias_comunes(int dias_comunes[], int dias_alumno[]) {
    for (int i = 1; i < MAX; i++)
        dias_comunes[i] = dias_comunes[i] && dias_alumno[i];
}

void leer_dias(struct Alumnos* num)
{

    for(int i = 1; i <= num->nelms; i++)
    {
        int dia;
        int dias_alumnos[MAX] = {0};
        printf("Introduzca los dias preferidos por el alumno %d:\n", i);
        scanf("%d", &dia);
        while (dia != 0)
        {
            if (dia > 0 && dia < MAX )
            {
                dias_alumnos[dia] = 1;
            }
            scanf(" %d", &dia);
        }
        if (i == 1)
        {
            for (int j = 0; j < MAX; j++)
                num->elem[j] = dias_alumnos[j];
        }
        else
            calcular_dias_comunes(num->elem, dias_alumnos);
    }
}

void leer_alumnos(struct Alumnos* num)
{
    printf("Introduce el numero de alumnos: ");
    scanf("%d", &num->nelms);
    if (num->nelms <= 0)
        printf("Error.\n");
    else
        leer_dias(num);
}

void mostrar_comunes(const struct Alumnos* num)
{
    bool hay_dias_comunes = false;
    printf("Los dias comunes son:");
    for (int i = 1; i < MAX; i++)
    {
        if (num->elem[i]) {
            printf(" %d", i);
            hay_dias_comunes = true;
        }
    }
    if (!hay_dias_comunes)
        printf(" No hay dias comunes.");
}

int main()
{
    struct Alumnos num;
    leer_alumnos(&num);
    mostrar_comunes(&num);
}

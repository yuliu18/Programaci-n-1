#include <stdio.h>

enum {
    MAXALS = 20,
    MAXCARS = 31 + 1,
};

struct Alumno{
    char nombre[MAXCARS];
    double nota;
};

struct Datos{
    int nelms;
    struct Alumno elm[MAXALS];
};

void leer_alumno(struct Alumno* pts)
{
    printf("Introduzca nombre: ");
    scanf(" %31[^\n]", pts->nombre);
    printf("Introduzca nota: ");
    scanf(" %lg", &pts->nota);
}

void leer_datos(struct Datos* num)
{
    printf("Introduzca los alumnos: ");
    scanf(" %d", &num->nelms);
    if((num->nelms < 0) || (num->nelms > MAXALS))
    {
        printf("Error\n");
        num->nelms = 0;
    }
    else
    {
        for (int i = 0; i < num->nelms; i++)
        {
            leer_alumno(&num->elm[i]);
            /*printf("Introduce nombre: ");
              scanf(" %31[^\n]", num->elm[i].nombre);
              printf("Introduce nota: ");
              scanf("%lg", &num->elm[i].nota);
            */
        }
    }
}

double notamedia(const struct Datos* num)
{
    double media = 0;
    if (num->nelms > 0)
    {
        double suma = 0;
        for(int i = 0; i < num->nelms; i++)
        {
            suma += num->elm[i].nota;
        }
        media = suma/num->nelms;
    }
    return media;
}

void calificar(const struct Datos* num, double media)
{
    for(int i = 0; i < num->nelms; i++)
    {
        if (num->elm[i].nota >= media)
            printf("%s Aprobado\n", num->elm[i].nombre);
        else
            printf("%s Suspenso\n", num->elm[i].nombre);
    }
}

int main()
{
    struct Datos nts;
    leer_datos(&nts);
    double media = notamedia(&nts);
    calificar(&nts, media);
}

#include <stdio.h>

enum {
    MAXALS = 20,
};

struct Alumnos{
    int nelms;
    double elm[MAXALS];
};

void anyadirnota(struct Alumnos* num, double nota)
{
    if(num->nelms >= MAXALS)
        printf("Error");
    else
    {
        num->elm[num->nelms] = nota;
        ++num->nelms;
    }
}

void leer_alumno(struct Alumnos* num)
{
    num->nelms = 0;
    double nota = 0;
    printf("Introduzca notas: ");
    scanf("%lg", &nota);
    while (nota>=0)
    {
        anyadirnota(num, nota);
        scanf("%lg", &nota);
    }
}

double notamedia(const struct Alumnos* num)
{
    double total = 0, media = 0;
    for(int i = 0; i < num->nelms; i++)
    {
        total += num->elm[i];
    }
    media = total / num->nelms;
    return media;
}

void calificar(const struct Alumnos* num, double media)
{
    for(int i = 0; i < num->nelms; i++)
    {
        if (num->elm[i] >= media)
            printf("Alumno %d esta aprobado con un %lg\n", i, num->elm[i]);
        else
            printf("Alumno %d esta suspenso con un %lg\n", i, num->elm[i]);
    }
}

int main()
{
    struct Alumnos nts;
    leer_alumno(&nts);
    double resultado = notamedia(&nts);
    calificar(&nts, resultado);
}

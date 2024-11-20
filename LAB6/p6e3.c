#include <stdio.h>

enum{
    MAXALS = 20,
};

struct Estaturas
{
    int nelms;
    double list[MAXALS];
};

void leer_estatura(struct Estaturas* num)
{
    printf("Cuantas estaturas va a introducir (maximo 20): ");
    scanf("%d", &num->nelms);
    if((num->nelms < 0) || (num->nelms > MAXALS))
    {
        printf("Error\n");
        num->nelms = 0;
    }
    else
    {
        printf("Introduzca las %d estaturas: ", num->nelms);
        for (int i = 0; i < num->nelms; i++)
        {
            scanf("%lg", &num->list[i]);
        }
    }
}

double media(const struct Estaturas* num)
{
    double suma_total = 0, media = 0;
    for(int i = 0; i < num->nelms; i++)
        suma_total += num->list[i];
    media = suma_total/num->nelms;
    return media;
}

int masAltos(const struct Estaturas* alumnos, double media)
{
    int count = 0;
    for (int i = 0; i < alumnos->nelms; i++)
    {
        if (alumnos->list[i] > media)
            count++;
    }
    return count;
}

int masBajos(const struct Estaturas* alumnos, double media)
{
    int count = 0;
    for (int i = 0; i < alumnos->nelms; i++)
    {
        if (alumnos->list[i] < media)
            count++;
    }
    return count;
}

int main()
{
    struct Estaturas estatu;
    leer_estatura(&estatu);
    double medias = media(&estatu);
    printf("La media es: %lg\n", medias);
    printf("Numero de alumnos mas altos que la media: %d\n", masAltos(&estatu, medias));
    printf("Numero de alumnos mas bajos que la media: %d\n", masBajos(&estatu, medias));
}

#include <stdio.h>
#include <stdlib.h>

struct Alumno{
    int nelms;
    double* nota;
};

void leer(struct Alumno* nalum)
{
    printf("Cuantos alumnos hay: ");
    scanf("%d", &nalum->nelms);
    if (nalum->nelms <= 0)
    {
        nalum->nelms = 0,
        printf("Error.\n");
    }
    else
    {
        nalum->nota = calloc(nalum->nelms, sizeof(double));
        printf("Introduzca %d notas: ", nalum->nelms);
        for(int i = 0; i < nalum->nelms; i++)
            scanf(" %lg", &nalum->nota[i]);
    }
}

void liberar_datos(struct Alumno* nalum)
{
    free(nalum->nota);
    nalum->nota = NULL;
    nalum->nelms = 0;
}

double calc_media(const struct Alumno* nalum)
{
    double suma_total = 0;
    for (int i = 0; i < nalum->nelms; i++)
    {
        suma_total += nalum->nota[i];
    }
    return suma_total/nalum->nelms;
}

int main()
{
    struct Alumno nalum;
    leer(&nalum);
    double resultado = calc_media(&nalum);
    printf("La media de todo es: %lg", resultado);
    liberar_datos(&nalum);
}

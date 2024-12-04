#include <stdio.h>

const int N_rayas = 40;
const char raya = '-';

enum{
    MAX = 20,
    MAXCARS = 63 + 1,
    N_EV = 3,
};

struct Datos{
    char nombre[MAXCARS];
    double nota[N_EV];
};

struct Alumno{
    int nelms;
    struct Datos elm[MAX];
};

void leer_datos(struct Datos* dts)
{
    printf("Introduce el nombre del alumno y sus 3 notas: ");
    scanf(" %63[^ ]", dts->nombre);
    for (int i = 0; i < N_EV; i++)
    {
        scanf("%lg", &dts->nota[i]);
    }
}

void leer(struct Alumno* pts)
{
    printf("Introduce el numero de alumnos de la clase (maximo 20): ");
    scanf("%d", &pts->nelms);
    if (pts->nelms <= 0 || pts->nelms > MAX)
        printf("Error.\n");
    else
    {
        for (int i = 0; i < pts->nelms; i++)
            leer_datos(&pts->elm[i]);
    }
}

void imprimir_raya(int n)
{
    for (int i = 0; i < n; i++)
        printf("%c", raya);
    printf("\n");
}

void calc_nota(const struct Alumno* pts, double medias[N_EV])
{
    for (int j = 0; j < N_EV; j++)
    {
        double suma = 0;
        for (int i = 0; i < pts->nelms; i++)
        {
            suma += pts->elm[i].nota[j];
        }
        medias[j] = suma / pts->nelms;
    }
}


void mostrar_datos(const struct Datos* dts, double media[N_EV])
{
    char aprob[MAXCARS] = "Aprobado";
    char suspe[MAXCARS] = "Suspenso";
    printf("%-10s", dts->nombre);
    for(int i = 0; i < N_EV; i++)
    {
        if(dts->nota[i] >= media[i])
            printf("%-10s",aprob);
        else
            printf("%-10s",suspe);
    }
    printf("\n");
}

void mostrar_tabla(const struct Alumno* pts, double media[N_EV])
{
    printf("Alumno    Nota-1    Nota-2    Nota-3    \n");
    imprimir_raya(N_rayas);
    for (int i = 0; i < pts->nelms; i++)
    {
        mostrar_datos(&pts->elm[i], media);
    }

}


int main()
{
    struct Alumno alm;
    leer(&alm);
    double medias[N_EV];
    calc_nota(&alm, medias);
    mostrar_tabla(&alm, medias);
}

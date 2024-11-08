#include <stdio.h>

enum {
    NELEMS = 3
};

void leer(int nelems, int datos[nelems])
{
    printf("Introduzca %d calificaciones de los alumnos: ", nelems);
    for (int i = 0; i < nelems; i++)
    {
        scanf(" %d", &datos[i]);
    }
}

void calificar(int nelems, const int datos[nelems])
{
    for(int i = 0; i < nelems; i++)
    {
        if (datos[i] >= 5)
            printf("Alumno %d esta aprobado con un %d\n", i, datos[i]);
        else
            printf("Alumno %d esta suspenso con un %d\n", i, datos[i]);
    }
}

int main()
{
    int nota_alumno[NELEMS];
    leer(NELEMS, nota_alumno);
    calificar(NELEMS, nota_alumno);
}


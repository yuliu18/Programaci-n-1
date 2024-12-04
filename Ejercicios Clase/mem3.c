#include <stdio.h>
#include <string.h>

enum{
    MAXCARS = 63 + 1,
    MAXC = 20;
};

struct Alumno{
    char nombre[MAXCARS];
    double nota;
};

struct LAlumnos{
    int capacidad;
    int nelms;
    struct Alumno* elm;
};

void inic_lista(struct LAlumnos* v)
{
    printf("Introduzca numeros de Alumnos: ");
    scanf("%lg", v->nelms);
}

void leer_alum(struct LAlumnos* v)
{
    inic_lista;
}

int main()
{

}

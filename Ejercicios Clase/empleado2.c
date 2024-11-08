#include <stdio.h>
#include <stdbool.h>

struct Fecha{
    int dia;
    int mes;
    int anyo;
};

struct Empleado{
    int codigo;
    double sueldo;
    struct Fecha fecha_ingreso;
};

void leer_fecha(struct Fecha* f)
{
    scanf(" %d", &f->dia);
    scanf(" %d", &f->mes);
    scanf(" %d", &f->anyo);
}

void leer (struct Empleado* e)
{
    printf("Introduzca los datos del empleado: ");
    scanf(" %d", &e -> codigo);
    scanf(" %lg", &e -> sueldo);
    leer_fecha(&e->fecha_ingreso);

}

bool es_menor (const struct Fecha* f1, const struct Fecha* f2)
{
    bool ok = false;
    if (f1->anyo < f2->anyo)
        ok = true;
    else if (f1 ->mes < f2->mes)
        ok = true;
    else if(f1->dia < f2->dia)
        ok = true;
    return ok;
}

bool es_mayor (const struct Empleado* e1, const struct Empleado* e2)
{
    return es_menor(&e1->fecha_ingreso, &e2->fecha_ingreso);
}

void mostrar_fecha(const struct Fecha* f)
{
    printf(" %02d %02d %04d", f->dia, f->mes, f->anyo);
}

void mostrar(const struct Empleado* e)
{
    printf("%d %lg", e->codigo, e->sueldo);
    mostrar_fecha(&e->fecha_ingreso);
}

int main()
{
    struct Empleado e1, e2;
    leer(&e1);
    leer(&e2);
    if (es_mayor(&e1, &e2))
        mostrar(&e2);
    else
        mostrar(&e1);
}

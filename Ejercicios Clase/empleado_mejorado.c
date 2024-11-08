#include <stdio.h>

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

void leer_fecha(struct Fecha* pf)
{
    scanf(" %d %d %d", &pf -> dia, &pf ->mes, &pf -> anyo);
}

void leer(struct Empleado* e1)
{
    printf("Introduzca los datos del empleado: ");
    scanf(" %d", &e1 -> codigo);
    scanf(" %lg", &e1 -> sueldo);
    leer_fecha(&e1 -> fecha_ingreso);
}

void mostrar_fecha(const struct Fecha* pf)
{
    printf("%d %d %d", pf -> dia, pf -> mes, pf -> anyo);
}

void mostrar(const struct Empleado* e1)
{
    printf("%d %lg", e1 -> codigo, e1 -> sueldo);
    mostrar_fecha(&e1 -> fecha_ingreso);
}

int main()
{
    struct Empleado e1;
    leer(&e1);
    mostrar(&e1);
}

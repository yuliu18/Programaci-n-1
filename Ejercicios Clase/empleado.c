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

void leer(struct Empleado* e1)
{
    printf("Introduzca los datos del empleado: ");
    scanf(" %d %lg", &e1 -> codigo, &e1 -> sueldo);
    scanf(" %d %d %d", &e1 -> fecha_ingreso.dia, &e1 -> fecha_ingreso.mes, &e1 -> fecha_ingreso.anyo);
}

void mostrar(struct Empleado* e1)
{
    printf("%d %lg", e1 -> codigo, e1 -> sueldo);
    printf(" %d %d %d", e1 -> fecha_ingreso.dia, e1 -> fecha_ingreso.mes, e1 -> fecha_ingreso.anyo);
}

int main()
{
    struct Empleado e1;
    leer(&e1);
    mostrar(&e1);
}

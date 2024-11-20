#include <stdio.h>

enum{
    MAXCARS = 63 + 1,
};

struct Fecha{
    int dia;
    int mes;
    int anyo;
};

struct Pedido{
    int codigo;
    char nombre[MAXCARS];
    double precio;
    int cantidad;
    struct Fecha fecha;
};

void leer_fecha(struct Fecha* fecha)
{
    printf("Introduzca fecha del pedido: ");
    scanf("%d %d %d", &fecha->dia, &fecha->mes, &fecha->anyo);
}

void leer_pedido(struct Pedido* prod)
{
    printf("Introduzca codigo del producto: ");
    scanf("%d", &prod->codigo);
    printf("Introduzca nombre del producto: ");
    scanf(" %63[^\n]", prod->nombre);
    printf("Introduzca precio del producto: ");
    scanf("%lg", &prod->precio);
    printf("Introduzca cantidad pedida: ");
    scanf("%d", &prod->cantidad);
    leer_fecha(&prod->fecha);
    printf("\n");
}

void mostrar_fecha(const struct Fecha* fecha)
{
    printf("Fecha del pedido: %d %d %d\n", fecha->dia, fecha->mes, fecha->anyo);
}

void mostrar(const struct Pedido* prod)
{
    printf("Codigo del producto: %d\n", prod->codigo);
    printf("Nombre del producto: %s\n", prod->nombre);
    printf("Precio del producto: %lg\n", prod->precio);
    printf("Cantidad pedida: %d\n", prod->cantidad);
    mostrar_fecha(&prod->fecha);
    printf("\n");
}

double precio_total(const struct Pedido* prod)
{
    double precio_total = prod->precio * prod->cantidad;
    return precio_total;
}

int main()
{
    struct Pedido prod;
    leer_pedido(&prod);
    mostrar(&prod);
    printf("El precio total del pedido es: %lg\n", precio_total(&prod));


}

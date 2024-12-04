#include <stdio.h>

enum{
    MAXCARS = 63 + 1,
    MAX = 20,

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

struct LPedidos{
    int nelms;
    struct Pedido elm[MAX];
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
void leer_pedidos(struct LPedidos* pds)
{
    printf("Introduzca total de pedidos: ");
    scanf("%d", &pds->nelms);
    printf("\n");
    for(int i = 0; i < pds->nelms; i++)
    {
        leer_pedido(&pds->elm[i]);
    }
}
void mostrar_fecha(const struct Fecha* fecha)
{
    printf("Fecha del pedido: %d %d %d\n", fecha->dia, fecha->mes, fecha->anyo);
}

void mostrar_pedido(const struct Pedido* prod)
{
    printf("Codigo del producto: %d\n", prod->codigo);
    printf("Nombre del producto: %s\n", prod->nombre);
    printf("Precio del producto: %lg\n", prod->precio);
    printf("Cantidad pedida: %d\n", prod->cantidad);
    mostrar_fecha(&prod->fecha);
    printf("\n");
}

void mostrar_pedidos(const struct LPedidos* pds)
{
    printf("Pedidos: \n");
    for(int i = 0; i < pds->nelms; i++)
    {
        mostrar_pedido(&pds->elm[i]);
    }
}

double calc_precio_total(const struct LPedidos* prod)
{
    double precio_total = 0;
    for(int i = 0; i < prod->nelms; i++)
    {
        precio_total += prod->elm[i].precio*prod->elm[i].cantidad;
    }
    return precio_total;
}

int main()
{
    struct LPedidos prod;
    leer_pedidos(&prod);
    mostrar_pedidos(&prod);
    printf("El precio total de los pedidos es: %lg", calc_precio_total(&prod));
}


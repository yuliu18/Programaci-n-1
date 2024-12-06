#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

enum {
    MAXCARS = 63 + 1,
};

struct Producto {
    int codigo;
    char nombre[MAXCARS];
    double precio;
};

struct Farmacia {
    int capacidad;
    int nelms;
    struct Producto* elm;
};

void anyadir_producto(struct Farmacia* f, const struct Producto* p)
{
    if (f->nelms >= f->capacidad)
    {
        f->capacidad *= 2;
        f->elm = realloc(f->elm, f->capacidad * sizeof(struct Producto));
    }
    f->elm[f->nelms] = *p;
    f->nelms++;
}

void leer_producto(struct Producto* p)
{
    printf("Datos del producto\n");
    printf("Código: ");
    scanf(" %d", &p->codigo);
    printf("Nombre: ");
    scanf(" %63[^\n]", p->nombre);
    printf("Precio: ");
    scanf(" %lg", &p->precio);
}

void inicializar_farmacia(struct Farmacia* f)
{
    f->nelms = 0;
    f->capacidad = 4;
    f->elm = calloc(f->capacidad, sizeof(struct Producto));
}

void eliminar_producto(struct Farmacia* f, int codigo)
{
    bool encontrado = false;
    int i = 0;

    while (i < f->nelms && !encontrado) {
        if (f->elm[i].codigo == codigo)
            encontrado = true;
        else
            i++;
    }

    if (!encontrado) {
        printf("Producto no encontrado\n");
    } else {
        for (int j = i; j < f->nelms - 1; j++) {
            f->elm[j] = f->elm[j + 1];
        }
        f->nelms--;

        struct Producto* temp = realloc(f->elm, f->nelms * sizeof(struct Producto));
        if (temp != NULL || f->nelms == 0) {
            f->elm = temp;
        }
    }
}

void mostrar_producto(const struct Producto* p)
{
    printf("Datos del producto\n");
    printf("Código: %d\n", p->codigo);
    printf("Nombre: %s\n", p->nombre);
    printf("Precio: %lg\n", p->precio);
}

void buscar_producto_codigo(const struct Farmacia* f, int codigo, bool* encontrado, struct Producto* p)
{
    *encontrado = false;
    for (int i = 0; i < f->nelms && !(*encontrado); i++)
    {
        if (f->elm[i].codigo == codigo)
        {
            *encontrado = true;
            *p = f->elm[i];
        }
    }
}

void buscar_producto_nombre(const struct Farmacia* f, const char nombre[], bool* encontrado, struct Producto* p)
{
    *encontrado = false;
    for (int i = 0; i < f->nelms && !(*encontrado); i++)
    {
        if (strcmp(f->elm[i].nombre, nombre) == 0)
        {
            *encontrado = true;
            *p = f->elm[i];
        }
    }
}

void mostrar_farmacia(const struct Farmacia* f)
{
    printf("La farmacia almacena los siguientes productos:\n");
    for (int i = 0; i < f->nelms; i++)
    {
        mostrar_producto(&f->elm[i]);
    }
}

void destruir_farmacia(struct Farmacia* f)
{
    free(f->elm);
    f->nelms = 0;
    f->capacidad = 0;
    f->elm = NULL;
}

bool operador_correct(char operador)
{
    return (operador == 'a' || operador == 'b' || operador == 'c' ||
            operador == 'd' || operador == 'e' || operador == 'x');
}

void buscar_codigo(struct Farmacia* f)
{
    int num = 0;
    bool encontrado = false;
    struct Producto p;
    printf("Introduzca codigo del producto: ");
    scanf(" %d", &num);
    buscar_producto_codigo(f, num, &encontrado, &p);
    if (encontrado)
        mostrar_producto(&p);
    else
        printf("Error, codigo de producto no encontrado\n");
}

void buscar_nombre(struct Farmacia* f)
{
    struct Producto p;
    char nom[MAXCARS];
    bool encontrado = false;
    printf("Introduzca nombre del producto: ");
    scanf(" %63[^\n]", nom);
    buscar_producto_nombre(f, nom, &encontrado, &p);
    if (encontrado)
        mostrar_producto(&p);
    else
        printf("Error, nombre de producto no encontrado\n");
}

void eliminar_codigo(struct Farmacia* f)
{
    int num;
    printf("Introduzca codigo del producto: ");
    scanf(" %d", &num);
    eliminar_producto(f, num);
}

char menu()
{
    char operador;
    do {
        printf("a.- Añadir Producto\n"
               "b.- Buscar Producto por Codigo\n"
               "c.- Buscar Producto por Nombre\n"
               "d.- Borrar Producto\n"
               "e.- Mostrar Productos\n"
               "x.- Salir\n"
               "Introduzca Opcion: ");
        scanf(" %c", &operador);
    } while (!operador_correct(operador));
    return operador;
}

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    char operador = 0;
    struct Farmacia f;
    inicializar_farmacia(&f);

    while (operador != 'x')
    {
        operador = menu();
        switch (operador) {
        case 'a': {
            struct Producto p_temp;
            printf("Introduzca los datos del Producto\n");
            leer_producto(&p_temp);
            anyadir_producto(&f, &p_temp);
            break;
        }
        case 'b':
            buscar_codigo(&f);
            break;
        case 'c':
            buscar_nombre(&f);
            break;
        case 'd':
            eliminar_codigo(&f);
            break;
        case 'e':
            if (f.nelms > 0) {
                mostrar_farmacia(&f);
            }
            break;
        }
    }

    destruir_farmacia(&f);
    printf("Fin\n");
    return 0;
}


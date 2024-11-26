#include <stdio.h>

const char suma = '+';
const char resta = '-';
const char multi = '*';
const char div = '/';

struct Complejo
{
    double real;
    double img;
};

void leer(struct Complejo* c)
{
    printf("Introduzca un número complejo (real, img): ");
    scanf(" %lg %lg", &c->real, &c->img);
}

void escribir(const struct Complejo* c)
{
    printf("( %lg, %lg ) ", c->real, c->img);
}

void sumar(const struct Complejo* c1, const struct Complejo* c2, struct Complejo* res)
{
    res->real = c1->real + c2->real;
    res->img = c1->img + c2->img;
}

void restar(const struct Complejo* c1, const struct Complejo* c2, struct Complejo* res)
{
    res->real = c1->real - c2->real;
    res->img = c1->img - c2->img;
}

void multiplicar(const struct Complejo* c1, const struct Complejo* c2, struct Complejo* res)
{
    res->real = (c1->real * c2->real) - (c1->img * c2->img);
    res->img = (c1->real * c2->img) + (c1->img * c2->real);
}

void dividir (const struct Complejo* c1, const struct Complejo* c2, struct Complejo* res)
{
    double denominador = (c2->real * c2->real) + (c2->img * c2->img);

    if (denominador == 0.0)
        printf("Error\n");
    else
    {
        res->real = ((c1->real * c2->real) + (c1->img * c2->img)) / denominador;
        res->img = ((c1->img * c2->real) - (c1->real * c2->img)) / denominador;
    }
}


void escribir_resultado(const struct Complejo* c1, const struct Complejo* c2, const struct Complejo* res, char car)
{
    escribir(c1);
    printf("%c ", car);
    escribir(c2);
    printf("= ");
    escribir(res);
    printf("\n");
}

int main()
{
    struct Complejo c1;
    struct Complejo c2;
    struct Complejo res;
    leer(&c1);
    leer(&c2);
    sumar(&c1, &c2, &res);
    escribir_resultado(&c1, &c2, &res, suma);
    restar(&c1, &c2, &res);
    escribir_resultado(&c1, &c2, &res, resta);
    multiplicar(&c1, &c2, &res);
    escribir_resultado(&c1, &c2, &res, multi);
    dividir(&c1, &c2, &res),
    escribir_resultado(&c1, &c2, &res, div);

}

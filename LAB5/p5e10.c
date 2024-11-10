#include <stdio.h>

void actualizar_maximo(int* count_actual, int* count_maxima)
{
    if (*count_actual > *count_maxima)
        *count_maxima = *count_actual;
}

int tamano_mayor(char* c)
{
    int count_actual = 0;
    int count_maxima = 0;
    char antes = *c;
    scanf("%c", c);
    while (*c != '.')
    {
        if (*c >= antes)
            count_actual++;
        else
        {
            actualizar_maximo(&count_actual, &count_maxima);
            count_actual = 1;
        }
        antes = *c;
        scanf(" %c", c);
    }
    actualizar_maximo(&count_actual, &count_maxima);
    return count_maxima;
}

void mostrar(int resultado) {
    printf("Mayor subsucesion ordenada: %d\n", resultado);
}

void leer(char* c)
{
    printf("Introduzca sucesion de ceros y unos hasta punto: ");
    scanf(" %c", c);
    int resultado;
    if (*c == '.')
        resultado = 0;
    resultado = tamano_mayor(c);
    mostrar(resultado);

}

int main()
{
    char c;
    leer(&c);
}

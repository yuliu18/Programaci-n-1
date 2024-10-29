#include <stdio.h>
#include <stdbool.h>

int leer()
{
    int num;
    printf("Introduzca un numero: ");
    scanf(" %d", &num);
    return num;
}

int suma_divisores (int num)
{
    int resultado = 0;
    for (int i = 1; i <= num/2; i++)
    {
        if (num % i == 0)
            resultado += i;
    }
    return resultado;
}

bool es_perfecto (int num)
{
    return suma_divisores(num) == num;
}

int buscar_perfecto(int num)
{
    while (!es_perfecto(num))
    {
        num++;
    }
    return num;
}

void mostrar(int num)
{
    printf("Resultado: %d\n", num);
}
int main()
{
    int num = leer();
    int p = buscar_perfecto(num);
    mostrar(p);
}

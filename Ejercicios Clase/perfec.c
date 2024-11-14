#include <stdio.h>
#include <stdbool.h>

void leer(int* num)
{
    printf("Introduzca un numero: ");
    scanf("%d", num);
}

bool es_divisible(int num, int i)
{
    return num % i == 0;
}

int suma_total (int num)
{
    int total = 0;
    for (int i = 1; i <= num/2; i++)
    {
        if(es_divisible(num, i))
        {
            total += i;
        }
    }
    return total;
}

bool es_perfecto(int num)
{
    return num == suma_total(num);
}

int buscar_perfecto(int num)
{
    while(!es_perfecto(num))
    {
        num++;
    }
    return num;
}

void mostrar(int num)
{
    printf("El numero perfecto es: %d\n", num);
}

int main()
{
    int num;
    leer(&num);
    mostrar(buscar_perfecto(num));
}

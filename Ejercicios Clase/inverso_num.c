#include <stdio.h>

void leer(int* num)
{
    printf("Introduzca un numero: ");
    scanf("%d", num);
}

int digitos(int num)
{
    int count;
    while (num > 0)
    {
        num = num/10;
        count++;
    }
    return count;
}

void mostrar(int digito)
{
    printf(" %d ", digito);
}

void inverso(int num)
{
    int tope = digitos(num);
    int resultado = 0;
    for (int i = 0; i < tope; i++)
    {
        resultado = num % 10;
        mostrar(resultado);
        num = num/10;
    }
}

int main()
{
    int num;
    leer(&num);
    inverso(num);
}

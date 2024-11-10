#include <stdio.h>

void leer(int* num1, int* num2)
{
    printf("Introduzca dos numeros enteros: ");
    scanf(" %d %d", num1, num2);
}

void swaps(int* num1, int* num2)
{
    int z = *num1;
    *num1 = *num2;
    *num2 = z;
}

int potencia(int base, int exponente)
{
    int resultado;
    if (exponente == 0)
        resultado = 1;
    else if (exponente > 0)
        resultado = base * potencia(base, exponente - 1);
    return resultado;
}

void mostrar(int resultado)
{
     printf("Introduzca dos números enteros (base y exponente): %d\n", resultado);
}
int main()
{
    int num1, num2;
    leer(&num1,&num2);
    if (num1 < 0 || num2 < 0)
        printf("Error");
    else
        mostrar(potencia(num1, num2));
}


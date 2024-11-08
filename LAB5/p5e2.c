#include <stdio.h>

void leer(int* num1)
{
    printf("Introduzca número: ");
    scanf(" %d", num1);
}

void mostrar(int num1, int num2, int resultado)
{
    printf("%d + %d = %d, ", num1, num2, resultado);
}

int num_digito(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int num_divisor(int num)
{
    int divisor = 1;
    for (int i = 0; i < num; i++)
        divisor *= 10;
    return divisor;
}

void num_impar(int num1)
{
    if (num_digito(num1) % 2 != 0)
    {
        int mid = num_digito(num1) / 2;
        int digito_central = (num1 / num_divisor(mid)) % 10;
        printf("%d", digito_central);
    }
}

void suma_de_digito(int num1)
{
    int num_izquierda = 0;
    int num_derecha = 0;
    int resultado = 0;
    for (int i = 0; i < num_digito(num1)/2; i++)
    {
        num_derecha = (num1 / num_divisor(i)) % 10;
        num_izquierda = (num1 / num_divisor(num_digito(num1) - i - 1)) % 10;
        resultado = num_derecha + num_izquierda;
        mostrar(num_derecha, num_izquierda, resultado);

    }
    num_impar(num1);
}

void resultado(int num1)
{
    printf("El resultado es: ");
    suma_de_digito(num1);
}

int main()
{
    int num1;
    leer(&num1);
    resultado(num1);
}

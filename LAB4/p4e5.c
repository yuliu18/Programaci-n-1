#include <stdio.h>
#include <stdbool.h>

void leer(int* num1, int* num2)
{

    printf("Introduzca dos numeros: ");
    scanf(" %d %d", num1, num2);
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

bool son_distintos (int num1, int num2)
{
    return num1 != num2;
}

bool misma_suma_de_divisores (int num1, int num2)
{
    return (suma_divisores(num1) == num2) && (suma_divisores(num2) == num1);
}

void son_amigo(int num1, int num2)
{
    if (misma_suma_de_divisores(num1, num2) && son_distintos(num1, num2))
        printf("El resultado es: %d y %d son amigos", num1, num2);
    else
        printf("El resultado es: %d y %d no son amigos", num1, num2);

}

int main()
{
    int num1, num2;
    leer(&num1, &num2);
    son_amigo(num1, num2);
}

#include <stdio.h>
#include <stdbool.h>

void leer(int* num1, int* num2)
{
    printf("Introduzca un numero: ");
    scanf("%d", num1);
    printf("Introduzca un numero: ");
    scanf("%d", num2);
}

void swaps(int* num1, int* num2)
{
    int z = *num1;
    *num1 = *num2;
    *num2 = z;

}

void mostrar(int num1, int sum1, int sum2)
{
    printf("%d = %d + %d\n", num1, sum1, sum2);
}

bool es_par(int num)
{
    return num % 2 == 0;
}

bool es_primo(int n)
{
    bool ok = true;
    for (int i = 2; i < n && n > 1; i++)
    {
        if (n % i == 0)
            ok = false;
    }
    return ok;
}

void conjetura(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        if (es_par(i))
        {
            bool encontrado = false;
            for (int j = 2; j < i && !encontrado; j++)
            {
                if (es_primo(j) && es_primo(i - j))
                {
                    mostrar(i, j, i - j);
                    encontrado = true;
                }
            }
            if (!encontrado)
                printf("Error en Conjetura de Goldbach para: %d\n", i);
        }
    }
}

void resultado(int num1, int num2)
{
    printf("El resultado es: \n");
    conjetura(num1, num2);
}

int main()
{
    int A, B;
    leer(&A, &B);
    if (A > B)
    {
        swaps(&A, &B);
    }
    resultado(A, B);
}

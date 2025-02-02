#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

void leer(int* num)
{
    printf("Introduzca un n�mero: ");
    scanf(" %d", num);
}

void mostrar(int num)
{
    printf(" %d ", num);
}

bool es_primo(int num)
{
    return (num % 2 != 0) || (num == 2);
}

void num_primo(int num)
{
    int count = 1;
    int i = 2;
    while (count <= num)
    {
        if(es_primo(i))
        {
            mostrar(i);
            count++;
        }
        i++;
    }

}

void resultado(int num)
{
    printf("El resultado es: ");
    num_primo(num);
}

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num;
    leer(&num);
    resultado(num);
}

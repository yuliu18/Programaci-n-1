#include <stdio.h>

void leer(int* num)
{
    printf("Introduzca un numero n: ");
    scanf("%d", num);
}

int se_fibonacci(int num)
{
    int resul;
    if (num == 0)
        resul = 0;
    else if(num == 1)
        resul = 1;
    else
        resul = se_fibonacci(num - 1) + se_fibonacci(num - 2);
    return resul;
}

void mostrar(int resultado)
{
    printf("%d", resultado);
}

int main()
{
    int num;
    leer(&num);
    int resultado = se_fibonacci(num);
    mostrar(resultado);
}

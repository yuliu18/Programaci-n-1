#include <stdio.h>

void leer(int* num1)
{
    printf("Introduzca un numero >=0: ");
    scanf(" %d", num1);
}
void separador(int num1)
{
    int resultado = 0;
    do
    {
        resultado = num1 % 10;
        printf(" %d", resultado);
        num1 /= 10;
    }
    while (num1 > 0);
}

int main()
{
    int num1;
    leer(&num1);
    if (num1 < 0)
    {
        printf("Error\n");
    }
    else
    {
        separador(num1);
    }

}

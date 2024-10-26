#include <stdio.h>

int main()
{
    int Num1;
    int result;

    printf("Introduzca un numero: ");
    scanf(" %d", &Num1);

    result = (Num1 % 2 == 0) ? 1 : 0; // tambien se puede: int resto = Num1 % 2; bool resto = (result == 0);
    printf(" %d", result);
}

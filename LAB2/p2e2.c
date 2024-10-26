#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1, num2, num3;
    int mayor = 0;

    printf("Introduzca tres números enteros: ");
    scanf(" %d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        mayor = num1;
    else if (num2 > num1 && num2 > num3)
        mayor = num2;
    else if (num3 > num1 && num3 > num2)
        mayor = num3;
    else
        mayor = 1;

    if (mayor != 1)
        printf("El número mayor es: %d\n", mayor);
    else
        printf("No existe un único número mayor\n");
}

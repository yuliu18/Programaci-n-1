#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    int Num1;
    int Num2;
    printf("Introduzca un n�mero entero: ");
    scanf(" %d", &Num1);
    printf("Introduzca otro n�mero entero: ");
    scanf(" %d", &Num2);
    printf("El valor del primer n�mero introducido es: %d\n", Num1);
    printf("El valor del segundo n�mero introducido es: %d\n", Num2);
    /*si introduce un valor que no corresponde al tipo de variable en el que se guarda, te devolver�
      un valor basura, dado que ha iniciado los dos variables sin asignar*/

}

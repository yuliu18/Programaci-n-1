#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    int Num1;
    int Num2;
    printf("Introduzca un número entero: ");
    scanf(" %d", &Num1);
    printf("Introduzca otro número entero: ");
    scanf(" %d", &Num2);
    printf("El valor del primer número introducido es: %d\n", Num1);
    printf("El valor del segundo número introducido es: %d\n", Num2);
    /*si introduce un valor que no corresponde al tipo de variable en el que se guarda, te devolverá
      un valor basura, dado que ha iniciado los dos variables sin asignar*/

}

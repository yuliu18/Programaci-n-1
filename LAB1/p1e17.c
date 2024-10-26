#include <stdio.h>
#include <stdbool.h>

 int main()
{
    int num1, num2;

    printf("Introduzca el primer número entero: ");
    scanf(" %d", &num1);

    printf("Introduzca el segundo número entero: ");
    scanf(" %d", &num2);

    int suma = num1 + num2;
    printf("Primer número: %d\n", num1);
    printf("Segundo número: %d\n", num2);
    printf("Resultado (num1 + num2): %d\n", suma);

    /*Cuando el cálculo de un número supera el valor de almacenamiento de un int
      se produce un desbordamiento de entero esto puede causar que el valor se
      “envuelva” y comience desde el valor mínimo permitido para un int*/
}

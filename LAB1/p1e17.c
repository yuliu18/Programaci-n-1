#include <stdio.h>
#include <stdbool.h>

 int main()
{
    int num1, num2;

    printf("Introduzca el primer n�mero entero: ");
    scanf(" %d", &num1);

    printf("Introduzca el segundo n�mero entero: ");
    scanf(" %d", &num2);

    int suma = num1 + num2;
    printf("Primer n�mero: %d\n", num1);
    printf("Segundo n�mero: %d\n", num2);
    printf("Resultado (num1 + num2): %d\n", suma);

    /*Cuando el c�lculo de un n�mero supera el valor de almacenamiento de un int
      se produce un desbordamiento de entero esto puede causar que el valor se
      �envuelva� y comience desde el valor m�nimo permitido para un int*/
}

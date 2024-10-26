#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num11 = - 7;
    int num12 = 4;
    double num13 = num11 + num12;
    int num14 = 1.0 * (num11 + num12);

    printf("Valor de número11 (int): %d\n", num11);
    printf("Valor de número12 (int): %d\n", num12);
    printf("Valor de número13 (double) = (num11 + num12): %lg CORRECTO\n", num13);
    printf("Valor de número14 (int)= (1.0 * (num11 + num12)): %d CORRECTO\n", num14);

    if (num11 < num12) {
    printf("El valor %d es menor que el valor %d CORRECTO\n", num11, num12);
    } else {
    printf("El valor %d NO es menor que el valor %d ERROR\n", num11, num12);
    }

    printf("-------------------------------\n");

    int num21 = - 7;
    unsigned num22 = 4;
    double num23 = num21 + num22;
    int num24 = 1.0 * (num21 + num22);

    printf("Valor de número21 (int): %d\n", num21);
    printf("Valor de número22 (unsigned): %u\n", num22);
    printf("Valor de número23 (double) = (num21 + num22): %lg ERROR\n", num23);
    printf("Valor de número24 (int) = (1.0 * (num21 + num22)): %d ERROR\n", num24);

    if (num21 < num22) {
    printf("El valor %d es menor que el valor %u CORRECTO\n", num21, num22);
    } else {
    printf("El valor %d NO es menor que el valor %u ERROR\n", num21, num22);
    }
}

/*Da problema a la hora de hacer calculo entre un variable de tipo int y de tipo unsigned
  porque la suma hace que -7 se convierta en unsigned para calcular y el número negativo
  se pasa a un número positivo muy grande*/

/*Todo esto hace que luego la operación falla no como el ejemplo anterior que los dos hace calculo con int

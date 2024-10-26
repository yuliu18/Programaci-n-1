#include <stdio.h>

int main()
{
    int num1, num2, num_mayor;
    int resultado = 0;
    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &num1, &num2);

    if ((num1 <= 0) || (num2 <= 0))
        printf("Error\n");
    else
    {
        if (num2 > num1)
        {
            num_mayor = num2;
            num2 = num1;
            num1 = num_mayor;

        }
        for (int i = 0; i < num2; i++)
        {
            resultado += num1;
        }
        printf("EL resultado es: %d\n", resultado);
    }
}

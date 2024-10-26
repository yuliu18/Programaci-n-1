#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int num1;

    printf("Introduce un número comprendido entre 0 y 10: ");
    scanf(" %d", &num1);

    if (num1 == 10)
        printf("Matrícula de honor\n");
    else if (num1 == 9)
        printf("Sobresaliente\n");
    else if (num1 >= 7 && num1 < 9)
        printf("Notable\n");
    else if (num1 >= 5 && num1 < 7)
        printf("Aprobado\n");
    else if (num1 >= 0 && num1 < 5)
        printf("Suspenso\n");
    else
        printf("Error\n");
}

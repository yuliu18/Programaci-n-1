#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int month;

    printf("Introduzca número de mes (de 1 hasta 12): ");
    scanf(" %d", &month);

    if (month > 0 && month <= 12)
    {
        int ndias = 31;
        switch (month){
        case 4:
        case 6:
        case 9:
        case 11:
            ndias = 30;
            break;
        case 2:
                ndias = 28;
            break;
        }
        printf("Ese mes tiene %d dias\n", ndias);
    }
    else
    {
        printf("Mes incorrecto\n");
    }
}


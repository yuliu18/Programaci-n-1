#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int dia, mes, years;
    printf("Introduzca el dia: ");
    scanf(" %d", &dia);

    printf("Introduzca el mes: ");
    scanf(" %d", &mes);

    printf("Introduzca el año: ");
    scanf(" %d", &years);

    printf("Dia: %d\n", dia);

    switch(mes){
    case 1:
        printf("Mes: Enero\n");
        break;
    case 2:
        printf("Mes: Febrero\n");
        break;
    case 3:
        printf("Mes: Marzo\n");
        break;
    case 4:
        printf("Mes: Abril\n");
        break;
    case 5:
        printf("Mes: Mayo\n");
        break;
    case 6:
        printf("Mes: Junio\n");
        break;
    case 7:
        printf("Mes: Julio\n");
        break;
    case 8:
        printf("Mes: Agosto\n");
        break;
    case 9:
        printf("Mes: Septiembre\n");
        break;
    case 10:
        printf("Mes: Octubre\n");
        break;
    case 11:
        printf("Mes: Noviembre\n");
        break;
    case 12:
        printf("Mes: Febrero\n");
        break;
    default:
        printf("Error\n");
        break;
    }

    printf("Año: %d\n", years);
}

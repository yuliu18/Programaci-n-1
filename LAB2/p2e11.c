#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int digito, provincia, numop, numcont, resto;

    printf("Introduzca el código numérico de 4 dígitos: ");
    scanf(" %d", &digito);

    if(digito < 1000)
    {
        printf("Código erróneo");
    }
    else
    {
        provincia = digito / 1000;
        resto = digito % 1000;
        printf("Provincia: %d\n", provincia);
        numop = resto / 10;
        printf("Número de operación: %d\n", numop);
        numcont = resto % 10;
        printf("Dígito de control: %d\n", numcont);

        if ((numop * provincia) % 10 == numcont)
        {
            printf("Comprobación: correcto");
        }
    }
}

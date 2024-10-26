#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int digito, provincia, numop, numcont, resto;

    printf("Introduzca el c�digo num�rico de 4 d�gitos: ");
    scanf(" %d", &digito);

    if(digito < 1000)
    {
        printf("C�digo err�neo");
    }
    else
    {
        provincia = digito / 1000;
        resto = digito % 1000;
        printf("Provincia: %d\n", provincia);
        numop = resto / 10;
        printf("N�mero de operaci�n: %d\n", numop);
        numcont = resto % 10;
        printf("D�gito de control: %d\n", numcont);

        if ((numop * provincia) % 10 == numcont)
        {
            printf("Comprobaci�n: correcto");
        }
    }
}

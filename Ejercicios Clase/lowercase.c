#include <stdio.h>

int main()
{
    char letter;
    printf("Introduzca un caracter: ");
    scanf (" %c", &letter);
    letter = letter + ((int)'a' + (int)letter - (int)A);
    printf("La minuscula del caracter introducido es: %c", letter);
}

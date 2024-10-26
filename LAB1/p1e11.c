#include <stdio.h>

int main()
{
    char c1, c2, c3, c4;

    printf("Introduzca una palabra de 4 letras: ");
    scanf(" %c %c %c %c", &c1, &c2, &c3, &c4);

    int distancia1 = c1 - 'a';
    int distancia2 = c2 - 'a';
    int distancia3 = c3 - 'a';
    int distancia4 = c4 - 'a';

    char s1 = 'A' + distancia1;
    char s2 = 'A' + distancia2;
    char s3 = 'A' + distancia3;
    char s4 = 'A' + distancia4;

    printf("La palabra [%c%c%c%c] transformada es [%c%c%c%c]\n", c1, c2, c3, c4, s1, s2, s3, s4);
}

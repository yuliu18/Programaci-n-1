#include <stdio.h>

int main()
{
    char c1, c2, c3, c4;
    char s1, s2, s3, s4;

    printf("Introduzca una palabra de 4 letras: ");
    scanf(" %c %c %c %c", &c1, &c2, &c3, &c4);

    s1 = c1 + 1;
    s2 = c2 + 1;
    s3 = c3 + 1;
    s4 = c4 + 1;

    printf("La palabra [%c%c%c%c] transformada es [%c%c%c%c]\n", c1, c2, c3, c4, s1, s2, s3, s4);
}

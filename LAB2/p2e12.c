#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    int x, y;
    char caracte;
    bool ok;

    printf("Introduzca dos numeros enteros: ");
    scanf(" %d %d", &x, &y);
    printf("Introduzca un caracter: ");
    scanf(" %c", &caracte);

    ok = x % 2 == 0;
    printf("(01) %d es par: %d\n", x, ok);
    ok = x >= 100 && x<= 900;
    printf("(02) %d tiene tres dígitos: %d\n", x, ok);
    ok = 100 % x == 0;
    printf("(03) %d es divisor de 100: %d\n", x, ok);
    ok = x >= 3 && x <= 7;
    printf("(04) %d pertenece a { 3, 4, 5, 6, 7 }: %d\n", x, ok);
    ok = (x >= 1 && x <= 3) || (x >= 7 && x <= 9);
    printf("(05) %d pertenece a { 1, 2, 3, 7, 8, 9 }: %d\n", x, ok);
    ok = x == 1 || x == 3 || x == 5 || x == 7 || x == 9;
    printf("(06) %d pertenece a { 1, 3, 5, 7, 9 }: %d\n", x, ok);
    ok = x == 2 || x == 5 || x == 6 || (x >= 7 && x <= 9);
    printf("(07) %d pertenece a { 2, 5, 6, 7, 8, 9 }: %d\n", x, ok);
    ok = (x == 3 || x == 4 || x == 6 || x == 8 || x == 9) && (y == 6 || y == 7 || y == 8 || y == 3);
    printf("(08) %d pertenece a { 3, 4, 6, 8, 9 }, %d pertenece a { 6, 7, 8, 3 }: %d\n", x, y, ok);
    ok = x <= 10 && y <= 10;
    printf("(09) Ni %d ni %d sean mayores que 10: %d\n", x, y, ok);
    ok = x % y != 0;
    printf("(10) %d no sea multiplo de %d: %d\n", x, y, ok);
    ok = isupper(caracte);
    printf("(11) '%c' es una letra mayuscula: %d\n", caracte, ok);
    ok = isalpha(caracte);
    printf("(12) '%c' es una letra: %d\n", caracte, ok);
    ok = isalnum(caracte);
    printf("(13) '%c' es un alfanumerico: %d\n", caracte, ok);
}

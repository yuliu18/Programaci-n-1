#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    char s1, s2;
    int diferencia = 0;

    printf("Introduzca un car�cter: ");
    scanf(" %c", &s1);

    if (s1 >= 'A' && s1 <= 'Z')
    {
        diferencia = s1 - 'A';
        s2 = 'a' + diferencia;
        printf("La letra en min�scula de %c es %c", s1, s2);
    }
    else if (s1 >= 'a' && s1 <= 'z')
    {
        diferencia = s1 - 'a'; // char nuevo_caracter = char(caracter - 'a' + 'A');
        s2 = 'A' + diferencia;
        printf("La letra en may�scula de %c es %c", s1, s2);
    }
    else
        printf("Error");
}

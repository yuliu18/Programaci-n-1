#include <stdio.h>

int main()
{
    char c;
    int letra = 0;
    int coma = 0;
    printf("Introduzca un texto hasta punto:\n");
    scanf("%c", &c);

    while (c != '.')
    {
        if (c == ',')
            coma++;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ') || (c == ',') )
            letra++;
        scanf("%c", &c);
    }
    printf("Cuenta de caracteres: %d. Cuenta de comas: %d", letra, coma);
}

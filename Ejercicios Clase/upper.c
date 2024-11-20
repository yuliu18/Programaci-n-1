#include <stdio.h>
#include <string.h>

enum{
    MAX = 31 + 1,
};

int main()
{
    char palabra[MAX];
    printf("Introduzca una palabra: ");
    scanf(" %31s", palabra);
    strupr(palabra);
    printf("Resultado: %s\n", palabra);
}

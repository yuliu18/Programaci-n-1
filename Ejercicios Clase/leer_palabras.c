#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum{
    MAX=31+1,
};

const char FIN[MAX] = "fin";

bool  es_vocal(const char pal)
{
    return (pal == 'a') || (pal == 'e')
            || (pal == 'i') || (pal == 'o')
            || (pal == 'u') || (pal == 'A')
            || (pal == 'E') || (pal == 'I')
            || (pal == 'O') || (pal == 'U');
}

void procesar(int maxcars, const char pal[maxcars], int* count)
{
    if (es_vocal(pal[0]))
        ++*count;
}

int main()
{
    char palabra[MAX];
    int count = 0;
    printf("Introduzca palabras hasta %s: ", FIN);
    scanf(" %31s", palabra);
    while (strcmp(palabra, FIN) != 0)
    {
        procesar(MAX, palabra, &count);
        scanf(" %31s", palabra);
    }
    printf("Resultado: %d\n", count);
}

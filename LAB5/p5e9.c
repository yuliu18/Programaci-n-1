#include <stdio.h>
#include <stdbool.h>

bool secuencia_abc (char* c)
{
    bool ok = false;
    if (*c == 'a')
    {
        scanf("%c", c);
        if (*c == 'b')
        {
            scanf("%c", c);
            if (*c == 'c')
                ok = true;
        }
    }
    return ok;
}

void mostrar (bool ok)
{
    if (ok)
        printf("La secuencia 'abc' SI aparece en la frase de entrada\n");
    else
        printf("La secuencia 'abc' NO aparece en la frase de entrada\n");
}

void leer(char* c)
{
    bool ok = false;
    printf("Introduzca el texto terminado en un punto: ");
    scanf("%c", c);
    while (*c != '.')
    {
        if (!ok)
            ok = secuencia_abc(c);
        scanf("%c", c);
    }
    mostrar(ok);
}

int main()
{
    char c;
    leer(&c);
}

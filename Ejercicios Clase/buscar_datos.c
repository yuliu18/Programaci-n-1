#include <stdio.h>

enum{
    MAXDTS = 20,
};

struct Datos{
    int nelms;
    int elm[MAXDTS];
};

int buscar(struct Datos* datos, int elm)
{
    int i = 0;
    while(datos->elm[i] != elm && i < MAXDTS)
        i++;
    if (i == MAXDTS)
        i = -1;
    return i;
}

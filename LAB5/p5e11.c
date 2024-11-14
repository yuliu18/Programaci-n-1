#include <stdio.h>
#include <stdbool.h>

void leer_secuencia(int* ant2, int* ant1, int* act)
{
    *ant2 = *ant1;
    *ant1 = *act;
    scanf(" %d", act);
}

bool fin_sec(int ant2, int ant1, int act)
{
    return ((ant2 > ant1) && (ant1 < act));
}

void mayor(int* count, int* maximo)
{
    if (*count > *maximo)
        *maximo = *count;
    *count = 1;
}

void mayor_monta(int* maximo)
{
    int ant2 = 0, ant1 = 0, act = 0, count = 1;
    *maximo = 0;
    leer_secuencia(&ant2, &ant1, &act);
    while (act != 0)
    {
        if(fin_sec(ant2, ant1, act))
            mayor(&count, maximo);
        count++;
        leer_secuencia(&ant2, &ant1, &act);
    }
    mayor(&count, maximo);
}

int main()
{
    printf("Introduzca sucesión de enteros hasta cero: ");
    int mm;
    mayor_monta(&mm);
    printf("Mayor Montaña: %d\n", mm);
}

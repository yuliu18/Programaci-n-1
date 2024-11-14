#include <stdio.h>
#include <stdbool.h>

void leer(int* num)
{
    printf("Introduzca una secuencia de numeros terminado en 0: ");
    scanf("%d", num);
}

void leer_secuencia(int* ant2, int* ant1, int* act)
{
    *ant2 = *ant1;
    *ant1 = *act;
    scanf("%d", act);
}

bool es_primo(int num)
{
    bool esprimo = (num > 1);
    for (int div = 2; (div <= num/2) && esprimo ; ++div) {
        if ((num % div) == 0) {
        esprimo = false;
        }
    }
    return esprimo;
}

bool secuencia_primo (int ant2, int ant1, int act)
{
    return ((ant2 < ant1 && ant1 < act)
                            && es_primo(ant2)
                            && es_primo(ant1)
                            && es_primo(act));
}

 void procesar(int ant2, int ant1, int act, bool* ok)
 {
    if (secuencia_primo(ant2, ant1, act))
        *ok = true;
 }

void procesarsecuencia(int num)
{
    int ant2= 0, ant1 = 0, act = 0;
    bool ok = false;
    while (num != 0 && ok != true)
    {
        procesar(ant2, ant1, act, &ok);
        leer_secuencia(&ant2, &ant1, &act);
    }
    printf("Resultado: %d\n", ok);
}

int main()
{
    int num;
    leer(&num);
    procesarsecuencia(num);
}

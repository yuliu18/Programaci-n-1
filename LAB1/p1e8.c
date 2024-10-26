#include <stdio.h>

const int BY_A_KB = 1024;
const int KB_A_MB = 1024;

int main()
{
    int total;
    int mb, kb, bytes;
    int resto;

    printf("Introduzca una cantidad de Bytes: ");
    scanf(" %i", &total);

    mb = total / (BY_A_KB*KB_A_MB);
    resto = total % (BY_A_KB*KB_A_MB);

    kb = resto / BY_A_KB;

    bytes = resto % BY_A_KB;

    printf("%i Bytes corresponden a:\n", total);
    printf("     Mibytes = %i\n", mb);
    printf("     Kibytes = %i\n", kb);
    printf("     Bytes   = %i\n", bytes);
}

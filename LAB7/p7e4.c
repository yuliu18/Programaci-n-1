#include <stdio.h>
#include <stdbool.h>

enum{
    MAXCARS = 63 + 1,
};

void leer(int maxcars, char texto[maxcars])
{

    printf("Entrada: ");
    for(int i = 0; i < maxcars; i++)
    {
        scanf("%63[^\n]", &texto[i]);
    }
}

int ft_atoi(int maxcars, char texto[maxcars])
{
    int i = 0;
    int result = 0;
    while (texto[i] != '\0')
    {
        result *= 10;
        result = result + (texto[i] - '0');
        i++;
    }
    return result;
}

int main()
{
    char num[MAXCARS];
    leer(MAXCARS, num);
    printf("Valor:   %s\n", num);
    int result = ft_atoi(MAXCARS, num);
    printf("Doble:   %d", result*2);
}

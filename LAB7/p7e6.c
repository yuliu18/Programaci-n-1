#include <stdio.h>
#include <stdbool.h>

const char UNION = '+';
const char DIF = '-';
const char INTER = '*';
const char FIN = '&';

enum{
    MAXCARS = 63 + 1,
};

bool encontrar(int maxcars, char texto[maxcars], char valor)
{
    int i = 0;
    bool ok = false;
    while(texto[i] != '\0' && texto[i] != valor)
    {
        i++;
    }
    if(texto[i] == valor)
        ok = true;
    return ok;
}

void leer_opcion(char* entrada)
{
    printf("Introduzca la operacion a realizar (+,-,*) (& para terminar): ");
    scanf(" %c", entrada);
}

void leer_parametro(int maxcars, char par[maxcars])
{
    char par1[maxcars];
    scanf("%63s", par1);
    int count = 0;
    for(int i = 0; (i < maxcars) && par1[i] != '\0'; i++)
    {
        if(par1[i] >= 'a' && par1[i] <= 'z')
        {
            par[count] = par1[i];
            count++;
        }
    }
}

void op_union(int MAXCARS, char par1[MAXCARS], char par2[MAXCARS], char result [MAXCARS])
{
    int count = 0;
    for(int i = 0; (i < MAXCARS - 1) && par2[i] != '\0'; i++)
    {
        result[count] = par2[i];
        count++;
    }
    for (int j = 0; (j < MAXCARS - 1) && par1[j] != '\0'; j++)
    {
        if(!encontrar(MAXCARS, par2, par1[j]))
        {
            result[count] = par1[j];
            count++;
        }
    }
    printf("El resultado es: %s\n", result);
}

void op_dif(int MAXCARS, char par1[MAXCARS], char par2[MAXCARS], char result[MAXCARS])
{
    int count = 0;
    for (int j = 0; (j < MAXCARS - 1) && par1[j] != '\0'; j++)
    {
        if(!encontrar(MAXCARS, par2, par1[j]))
        {
            result[count] = par1[j];
            count++;
        }

    }
    printf("El resultado es: %s\n", result);

}

void op_inter(int MAXCARS, char par1[MAXCARS], char par2[MAXCARS], char result[MAXCARS])
{
    int count = 0;
    for (int j = 0; (j < MAXCARS - 1) && par1[j] != '\0'; j++)
    {
        if(encontrar(MAXCARS, par2, par1[j]))
        {
            result[count] = par1[j];
            count++;
        }

    }
    printf("El resultado es: %s\n", result);
}

void calculadora(char entrada)
{
    while(entrada != FIN)
    {
        char par1[MAXCARS] = {0};
        char par2[MAXCARS] = {0};
        char result[MAXCARS] = {0};
        printf("Introduzca op1: ");
        leer_parametro(MAXCARS, par1);
        printf("Introduzca op2: ");
        leer_parametro(MAXCARS, par2);
        if(entrada == UNION)
        {
            op_union(MAXCARS, par1, par2, result);
        }
        else if(entrada == DIF)
        {
            op_dif(MAXCARS, par1, par2, result);
        }
        else if(entrada == INTER)
        {
            op_inter(MAXCARS, par1, par2, result);
        }
        leer_opcion(&entrada);
    }
    printf("Fin del programa");
}

int main()
{
    char entrada;
    leer_opcion(&entrada);
    calculadora(entrada);

}

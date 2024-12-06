#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum{
    MAXCARS = 15 + 1,
};

void leer_valor(int maxcars, char texto[maxcars], int* clave)
{
    printf("Introduce clave: ");
    scanf("%d", clave);
    printf("Introduce texto: ");
    scanf(" %15[^\n]", texto);
}

void leer_valor2(int** texto, int* clave, int* num)
{
    printf("Introduce clave: ");
    scanf("%d", clave);
    printf("Introduce número de elementos: ");
    scanf("%d", num);
    *texto = calloc(*num, sizeof(int));
    printf("Introduce %d números: ", *num);
    for (int i = 0; i < *num; i++)
    {
        scanf(" %d", &(*texto)[i]);
    }
}

void mostrar_valor(int maxcars, char texto[maxcars])
{
    printf("%s\n", texto);
}

void mostrar_valor2(int num, int texto[num])
{
    printf("[ ");
    for (int i = 0; i < num; ++i)
    {
        printf("%d", texto[i]);
        if (i != num - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

void cifrar_buffer(int clave, int szbytes, void* dst, const void* org)
{
    char* d = (char*)dst;
    const char* tmp = (const char*)org;
    for(int i = 0; i < szbytes; i++)
    {
        d[i] = tmp[i] + clave;
    }
}

void descifrar_buffer(int clave, int szbytes, void* dst, const void* org)
{
    char* d = (char*) dst;
    const char* tmp = (const char*)org;
    for(int i = 0; i < szbytes; i++)
    {
        d[i] = tmp[i] - (char)clave;
    }
}

void mostrar_buffer(int szbytes, const void* buffer)
{
    const char* texto = (const char*)buffer;
    printf("[ ");
    for (int i = 0; i < szbytes; ++i)
    {
        printf("%#hx", texto[i]);
        if (i != szbytes - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

void mostrar_prueba1()
{
    char buffer[MAXCARS];
    char buffer1[MAXCARS];
    char buffer2[MAXCARS];
    int clave = 0;
    printf("----------------------------------\n");
    printf("-- Prueba-1 ----------------------\n");
    printf("----------------------------------\n");

    leer_valor(MAXCARS, buffer, &clave);
    printf("Texto original:    ");
    mostrar_valor(MAXCARS, buffer);
    printf("Buffer original:   ");
    mostrar_buffer(MAXCARS, buffer);
    cifrar_buffer(clave, MAXCARS, buffer1, buffer);
    printf("Buffer cifrado:    ");
    mostrar_buffer(MAXCARS, buffer1);
    descifrar_buffer(clave, MAXCARS, buffer2, buffer1);
    printf("Buffer descifrado: ");
    mostrar_buffer(MAXCARS, buffer2);
    printf("Texto descifrado:  %s\n", buffer2);
}

void mostrar_prueba2()
{
    int* buffer = NULL;
    int clave = 0;
    int num = 0;
    printf("----------------------------------\n");
    printf("-- Prueba-2 ----------------------\n");
    printf("----------------------------------\n");
    leer_valor2(&buffer, &clave, &num);
    printf("Datos originales:    ");
    mostrar_valor2(num, buffer);
    printf("Buffer original:   ");
    mostrar_buffer(num * sizeof(int), buffer);
    int* buffer1 = calloc(num, sizeof(int));
    cifrar_buffer(clave, num * sizeof(int), buffer1, buffer);
    printf("Buffer cifrado:    ");
    mostrar_buffer(num * sizeof(int), buffer1);
    int* buffer2 = calloc(num, sizeof(int));
    descifrar_buffer(clave, num * sizeof(int), buffer2, buffer1);
    printf("Buffer descifrado: ");
    mostrar_buffer(num * sizeof(int), buffer2);
    printf("Datos descifrados: ");
    mostrar_valor2(num, buffer2);

    free(buffer);
    free(buffer1);
    free(buffer2);
}

int main()
{
    mostrar_prueba1();
    mostrar_prueba2();
}

#include <stdio.h>

enum{
    MAX = 10,
};

void leer_numeros(int frecuencia[])
{
    int num;
    printf("Introduzca una secuencia de números (hasta negativo): ");
    scanf("%d", &num);
    while(num >= 0)
    {
        if (num >= 0 && num <= 9)
            frecuencia[num]++;
        scanf("%d", &num);
    }
}

void mostrarFrecuencia(const int frecuencia[])
{
    printf("La frecuencia de cada dígito es:\n");
    for (int i = 0; i < MAX; i++)
        printf("%d:%d\n", i, frecuencia[i]);
}

int main()
{
    int frecuencia[MAX] = {0};
    leer_numeros(frecuencia);
    mostrarFrecuencia(frecuencia);

}

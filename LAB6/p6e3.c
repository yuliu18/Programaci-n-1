#include <stdio.h>

enum{
    MAX = 10,
};

void leer_numeros(int frecuencia[])
{
    int num;
    printf("Introduzca una secuencia de n�meros (hasta negativo): ");
    scanf("%d", &num);
    while(num >= 0)
    {
        if (num >= 0 && num <= 9)
            frecuencia[num]++;
        else
            printf("N�mero inv�lido (%d). Por favor, introduzca n�meros entre 0 y 9.\n", num);
        scanf("%d", &num);
    }
}

void mostrarFrecuencia(const int frecuencia[])
{
    printf("La frecuencia de cada d�gito es:\n");
    for (int i = 0; i < MAX; i++)
        printf("%d:%d\n", i, frecuencia[i]);
}

int main()
{
    int frecuencia[10] = {0};
    leer_numeros(frecuencia);
    mostrarFrecuencia(frecuencia);

}

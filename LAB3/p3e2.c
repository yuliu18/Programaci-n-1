#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int n_coches, precio;
    double resultado = 0;
    printf("Introduzca número de modelos de coche: ");
    scanf(" %d", &n_coches);

    for (int i = 1; i <= n_coches; i++)
    {
        printf("Precio modelo %d: ", i);
        scanf(" %d", &precio);
        resultado += precio;
    }
    resultado /= n_coches;
    printf("El valor medio de los 4 modelos de coche asciende a: %lg", resultado);
}

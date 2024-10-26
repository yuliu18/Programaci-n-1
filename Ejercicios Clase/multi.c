#include <stdio.h>

void guardar(int* num1, int* num2)
{
    printf("Introduzca dos numeros: ");
    scanf(" %d %d", num1, num2);
    while (*num1 <= 0 || *num2 <= 0)
    {
        printf("Error\n");
        printf("Introduzca dos numeros: ");
        scanf(" %d %d", num1, num2);
    }
}
void intercambiar(int* num1, int* num2)
{   if (num1 < num2)
    {
        int z = *num1;
        *num1 = *num2;
        *num2 = z;
    }

}
int suma_acum(int num1, int num2)
{
    int resultado = 0;
    for (int i = 0; i < num2; i++)
    {
        resultado += num1;
    }
    return (resultado);
}
int multiplicar(int num1, int num2)
{
    intercambiar(&num1,&num2);
    return (suma_acum(num1, num2));

}
void imprimir(int resultado)
{
    printf("El resultado es: %d\n", resultado);
}

int main()
{
    int num1, num2;
    guardar(&num1, &num2);
    int resultado = multiplicar(num1, num2);
    imprimir(resultado);

}

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int N;
    printf("Introduzca un número: ");
    scanf(" %d", &N);

    if(N < 0)
        printf("Error");
    else
    {
        int result = 0;
        for (int i = 0; i <= N; i++)
        {
            result = result + i;
        }
        printf("La suma es: %d\n", result);
    }
}

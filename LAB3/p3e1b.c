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
        int i = 0;
        while (i <= N)
        {
            result = result + i;
            i++;
        }
        printf("La suma es: %d\n", result);
    }
}

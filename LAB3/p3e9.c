#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    char c;
    int x, y;
    int resultado = 0;
    printf("Operaci�n (+ - * / &): ");
    scanf(" %c", &c);

    if ((c == '+') || (c == '-') || (c == '*'))
    {
        while (c != '&')
        {
            printf("Operando 1: ");
            scanf(" %d", &x);
            printf("Operando 2: ");
            scanf(" %d", &y);
            if (c == '+')
                resultado = x + y;
            else if (c == '-')
                resultado = x - y;
            else
                resultado = x * y;
            printf("Resultado: %d\n", resultado);
            printf("Operaci�n (+- * / &): ");
            scanf(" %c", &c);
        }
    }
    else if (c != '&')
        printf("ERROR: Operaci�n no v�lida");
    else
        printf("FIN DEL PROGRAMA\n");
}

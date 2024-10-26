 #include <stdio.h>
 #include <windows.h>

 int main()
 {
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    char c;
    int count = 0;
    printf("Introduzca el texto terminado en un punto:\n");
    scanf("%c", &c);
    while (c != '.')
    {
        printf("%d ",c);
        count++;
        scanf("%c", &c);
    }
    printf("\n");
    printf("Número de caracteres leídos: %d", count);
 }

 #include <stdio.h>
 #include <stdbool.h>
 #include <windows.h>

 const double PI = 3.1416;

 int main()
 {
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    double longitud, area;
    double radio;

    printf("Hola\n");
    printf("Este programa calcula la longitud y el �rea de un c�rculo\n");
    printf("Introduce el radio del c�rculo: ");
    scanf(" %lg", &radio);

    longitud = 2*PI*radio;
    area = PI*(radio*radio);

    printf("Area = %lg\n", area);
    printf("Longitud = %lg\n", longitud);
 }

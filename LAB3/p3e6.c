#include <stdio.h>

int main() {
    int n;
    double pi = 2.0;
    double secuencia = 0;
    int count = 0;
    int i = 1;

    printf("Introduzca el número de fracciones: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Error. Introduzca el número de fracciones: ");
        scanf("%d", &n);
    }
    while (count < n) {
        if (count % 2 == 0) {
            secuencia = (double)(2 * i) / (2 * i - 1);
        } else {
            secuencia = (double)(2 * i) / (2 * i + 1);
            i++;
        }
        pi *= secuencia;
        count++;
    }

    printf("El valor de PI con %d fracciones es: %.5f\n", n, pi);
}

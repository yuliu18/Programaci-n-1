#include <stdio.h>

int main()
{
    int N;
    int num1;
    printf("Introduzca un numero N: ");
    scanf(" %d", &N);

    num1 = 1;
    for (int i = 0; i < N; i++)
    {
        printf(" %d", num1);
        num1 += 2;
    }
    printf("\n");
}

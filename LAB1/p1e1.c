#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

const double PTS = 166.386;

int main()
{
    int pts;
    printf("Introduzca cantidad de pts: ");
    scanf (" %d", &pts);
    double euro = pts / PTS;
    printf("%d pts equivalen a %lg euros", pts, euro);
}



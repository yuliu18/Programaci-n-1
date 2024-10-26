#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y, z;
    bool ok;
    printf("Introduzca tres numeros enteros: ");
    scanf(" %d %d %d", &x, &y, &z);

    ok = ! (x > y) && (x < z);
    printf("expr_1: %d\n", ok);
    ok = ! ((x > y) && (x < z));
    printf("expr_2: %d\n", ok);
    ok = ! ((x == y) || (x != z));
    printf("expr_3: %d\n", ok);
    ok = ! ((x == y) || ((x < y) && (x > z)));
    printf("expr_4: %d\n", ok);
    ok = (x == y) || (((x < y) && (x > z)) == false);
    printf("expr_5: %d\n", ok);
    ok = ((x != y) && (y < z)) || (((x == y) || (x > z)) != true);
    printf("expr_5: %d\n", ok);

    ok = (x <= y) && (x < z);
    printf("simpl_1: %d\n", ok);
    ok = (x <= y) || (x >= z);
    printf("simpl_2: %d\n", ok);
    ok = (x != y) && (x == z);
    printf("simpl_3: %d\n", ok);
    ok = (x != y) && ((x >= y) || (x <= z));
    printf("simpl_4: %d\n", ok);
    ok = (x >= y) || (x <= z);
    printf("simpl_5: %d\n", ok);
    ok = (x != y) && ((y < z) || (x <= z));
    printf("simpl_5: %d\n", ok);

}

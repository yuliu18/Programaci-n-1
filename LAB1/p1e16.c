#include <stdio.h>
#include <stdbool.h>

int main()
{
     printf("bool: %d bytes\n", (int)sizeof(bool));
     printf("char: %d bytes\n", (int)sizeof(char));
     printf("int: %d bytes\n", (int)sizeof(int));
     printf("double: %d bytes\n", (int)sizeof(double));
}

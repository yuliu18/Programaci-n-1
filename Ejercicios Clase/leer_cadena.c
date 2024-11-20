#include <stdio.h>

enum{
    MAXCARS = 127 + 1,
};

int main()
{
    char palabra1[MAXCARS];
    char texto1[MAXCARS];
    scanf(" %127s",palabra1);
    scanf(" %127[^\n]",texto1);
    int edad;
    char texto2[MAXCARS]= " Jose ; 20";
    sscanf(texto2,"%127s ; %d", palabra1, &edad);
    char texto3[MAXCARS]= " Jose Luis ; 20";
    sscanf(texto3,"%127[^\n;] %d", texto1,&edad);

}

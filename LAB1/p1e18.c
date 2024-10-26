 #include <stdio.h>
 #include <stdbool.h>

 int main()
 {
    bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
    printf("Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): %d ERROR\n", ok);
 }

/*al no coincidir un resultado con el otro resultado, al ser un variable de tipo bool te dice que es falso
  y devuelve cero. Ya que en programación se toma en cuenta unas reglas de procedencia y asociatividad*/

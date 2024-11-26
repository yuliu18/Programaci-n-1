#include <stdio.h>
#include <math.h>

const int U_ASIS = 6;
const int U_NOTA3 = 4;
const int U_EV_CON = 5;
const int U_FINAL = 4;
const double SUMA_PON1 = 0.10;
const double SUMA_PON2 = 0.30;
const double SUMA_PON3 = 0.60;
const double SUMA_N_PON1 = 0.04;
const double SUMA_N_PON2 = 0.12;
const double SUMA_N_PON3 = 0.24;
const double NOTA_MAX = 10;

struct Nota{
    int num_asis;
    double nota1;
    double nota2;
    double nota3;
    double nota_final;

};

double redondear(double numero)
{
    return round(numero * 10) / 10;
}

void leer_nota(struct Nota* nota)
{
    printf("Asistencia aprácticas [0,9]: ");
    scanf(" %d", &nota->num_asis);
    printf("Nota de control 1    [0,10]: ");
    scanf(" %lg", &nota->nota1);
    printf("Nota de control 2    [0,10]: ");
    scanf(" %lg", &nota->nota2);
    printf("Nota de control 3    [0,10]: ");
    scanf(" %lg", &nota->nota3);
    printf("Nota ex.final       [-1,10]: ");
    scanf(" %lg", &nota->nota_final);
}

void opcion_A(const struct Nota* nota, double* nota_fin)
{
    *nota_fin = nota->nota_final;
}

void opcion_B3 (const struct Nota* nota, double* nota_fin)
{
    if (nota->nota_final < U_FINAL)
        *nota_fin = nota->nota_final;
    else
    {
        double Suma_ponderada2 = SUMA_N_PON1*nota->nota1 + SUMA_N_PON2*nota->nota2 + SUMA_N_PON3*nota->nota3;
        *nota_fin = Suma_ponderada2 + ((NOTA_MAX - Suma_ponderada2)/NOTA_MAX)* nota->nota_final;
    }
}

void opcion_B2 (const struct Nota* nota, double* nota_fin)
{
    double Suma_ponderada = SUMA_PON1*nota->nota1 + SUMA_PON2*nota->nota2 + SUMA_PON3*nota->nota3;
    *nota_fin = Suma_ponderada;

    if (*nota_fin < U_EV_CON)
        opcion_B3(nota, nota_fin);
    else
    {
        if (nota->nota_final != -1)
            opcion_B3(nota, nota_fin);
    }
}

void opcion_B(const struct Nota* nota, double* nota_fin)
{
    if (nota->nota3 >= U_NOTA3)
        opcion_B2(nota, nota_fin);
    else
        opcion_B3(nota, nota_fin);
}

double calcular_nota(const struct Nota* nota)
{
    double nota_fin = 0;
    if (nota->num_asis < U_ASIS)
        opcion_A(nota, &nota_fin);
    else
        opcion_B(nota, &nota_fin);
    double resultado = redondear(nota_fin);
    return resultado;
}

void mostrar_result(double resultado)
{
    if (resultado == -1)
        printf("Nota final                  %.1f ", resultado);
    else
        printf("Nota final                   %.1f ", resultado);
    if (resultado < 0)
        printf("(No-Presentado)\n");
    else if (resultado >= 0 && resultado < 5)
        printf("(Suspenso)\n");
    else if (resultado >= 5 && resultado < 7)
        printf("(Aprobado)\n");
    else if(resultado >= 7 && resultado < 9)
        printf("(Notable)\n");
    else if(resultado >= 9 && resultado < 9.5)
        printf("(Sobresaliente)\n");
    else if (resultado >= 9.5 && resultado <= 10.0)
        printf("(Sobresaliente-MH)\n");
    else
        printf("Error.\n");

}

int main()
{
    struct Nota nota;
    leer_nota(&nota);
    double resultado = calcular_nota(&nota);
    mostrar_result(resultado);

}

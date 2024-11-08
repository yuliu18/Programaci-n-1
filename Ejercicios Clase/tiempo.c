#include <stdio.h>

const int H_min = 60;
const int Min_s = 60;

struct Tiempo{
    int horas;
    int minutos;
    int segundos;
};

void leer(struct Tiempo* inst)
{
    printf("Introduzca un instante de tiempo: ");
    scanf(" %d %d %d", &inst -> horas, &inst -> minutos, &inst -> segundos);
}

void mostrar(const struct Tiempo* inst)
{
    printf(" %02d %02d %02d", inst -> horas, inst -> minutos, inst -> segundos);
}

int tiempo_a_seg(const struct Tiempo* inst)
{
    return (inst -> horas * H_min * Min_s) + (inst -> minutos * Min_s) + (inst -> segundos);
}

void seg_a_tiempo(int seg, struct Tiempo* diff)
{
    diff -> horas = seg / (Min_s * H_min);
    diff -> minutos = (seg % (Min_s * H_min)) / Min_s;
    diff -> segundos = (seg % (Min_s * H_min)) % Min_s;
}

void diferencia(const struct Tiempo* inst1, const struct Tiempo* inst2, struct Tiempo* diff)
{
    seg_a_tiempo (tiempo_a_seg(inst1) - tiempo_a_seg(inst2), diff);
}

int main()
{
    struct Tiempo inst1, inst2, diff;
    leer(&inst1);
    leer(&inst2);
    diferencia(&inst1, &inst2, &diff);
    mostrar(&diff);
}

#include <stdio.h>
#include <stdbool.h>

enum{
    MAXELM = 20,
};

struct Lista{
    int nelms;
    int elm[MAXELM];
};

int buscar(struct Lista* pts, int elm)
{
    int i = 0;
    while(pts->elm[i] != elm && i < MAXELM)
        i++;
    if (i == MAXELM)
        i = -1;
    return i;
}

void borra_elm(struct Lista* plt, int elm, bool* ok)
{
   int pos = buscar(plt, elm);
   if (pos < 0)
    *ok = false;
   else
   {
       plt->elm[pos] = plt->elm[plt->nelms-1];
       --plt->nelms;
       *ok = true;
   }
}

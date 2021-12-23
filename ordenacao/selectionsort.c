#include "ordenacaomacros.h"

void selectionsort(Item *v, int l, int r)
{
    if (l == r)
        return;
    int min = l;
    for (int j = l + 1; j <= r; j++)
    {
        if (less(v[j], v[min]))
        {
            min = j;
        }
    }
    exch(v[min], v[l]);
    selectionsort(v, l + 1, r);
}
#include "ordenacaomacros.h"

void insertionsortH(Item *v, int l, int r, int h)
{
    for (int i = l + h; i <= r; i++)
    {
        int j = i;
        Item tmp = v[i];
        while (j >= l + h && less(tmp, v[j - h]))
        {
            v[j] = v[j - h];
            j -= h;
        }
        v[j] = tmp;
    }
}

void shellsort(Item *v, int l, int r)
{
    int h;
    for (h = 1; h <= (r - l) / 9; h = 3 * h + 1)
    {
    }
    for (; h > 0; h = h / 3)
    {
        insertionsortH(v, l, r, h);
    }
}
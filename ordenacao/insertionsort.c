#include "ordenacaomacros.h"

void insertionsort(Item *v, int l, int r)
{
    for (int i = r; i > l; i--)
    {
        cmpexch(v[i - 1], v[i]);
    }
    for (int i = l + 2; i <= r; i++)
    {
        int j = i;
        Item tmp = v[j];
        while (less(tmp, v[j - 1]))
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j]=tmp;
    }
}
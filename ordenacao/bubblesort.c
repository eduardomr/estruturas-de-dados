#include "ordenacaomacros.h"

void bubblesort(Item *v, int l, int r)
{
    for (int i=l;i<r;i++)
    {
        for (int j=l+1;j<=r;j++)
        {
          cmpexch(v[j-1],v[j]); 
        }
    }
}
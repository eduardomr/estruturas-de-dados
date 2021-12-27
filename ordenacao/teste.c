#include "selectionsort.c"
#include "bubblesort.c"
#include "insertionsort.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Item vetor[1000];
    for (int i = 0; i < 1000; i++)
    {
        vetor[i] = rand();
    }
    insertionsort(vetor, 0, 999); //Insira a função que deseja testar aqui

    for (int i = 0; i < 1000; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
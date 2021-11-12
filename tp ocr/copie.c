#include <stdlib.h>
#include <stdio.h>

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);

int main(void)
{
    int tableauOriginal[4] = {1, 1, 2, 3};
    int tableauCopie[4] = {10, 23, 8, 3};

    copie(tableauOriginal, tableauCopie, 4);
    return 0;
}

void copie(int *tableauOriginal, int *tableauCopie, int tailleTableau)
{
    int i = 0;

    for (i = 0; i < tailleTableau; i++)
    {
        int t1 = *(tableauOriginal + i);
        int t2 = *(tableauCopie + i);
        t2 = t1;
        printf("copie reussie : %d\n", t2);
    }
}

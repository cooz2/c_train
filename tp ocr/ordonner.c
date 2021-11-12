#include <stdlib.h>
#include <stdio.h>

void ordonnerTableau(int tableau[], int tailleTableau);

int main(void)
{
    int tableau[4] = {15, 81, 22, 13};

    ordonnerTableau(tableau, 4);
    return 0;
}

void ordonnerTableau(int *tableau, int tailleTableau)
{
    int i, j, k;

    for (i = 0; i < tailleTableau; i++)
    {
        for (j = i; j < tailleTableau; j++)
        {
            if (tableau[j] < tableau[i])
            {
                k = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = k;
            }
        }
    }
}
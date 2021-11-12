#include <stdio.h>
#include <stdlib.h>

void test(int tableau[], int taille, int max);

void test(int *tableau, int taille, int max)
{

    int i = 0;

    for (i = 0; i < max; i++)
    {
        printf("%d\n", tableau[i]);
    }

    if (tableau[i] > max)
    {
        tableau[i] = 0;
        printf("%d\n", tableau[i]);
    }
}

int main(void)
{
    int tableau[4] = {1, 2, 3, 5};
    int max = 3;

    test(tableau, 4, max);
    return 0;
}
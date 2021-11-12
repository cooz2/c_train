#include <stdlib.h>
#include <stdio.h>

double moyenneTableau(int tableau[], int tailleTableau);

int main(void)
{
    int tableau[5] = {7, 18, 19, 20, 5};

    moyenneTableau(tableau, 5);
    return 0;
}

double moyenneTableau(int *tableau, int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
        double sum = *(tableau + i) + sum++;
        double result = sum / 5;
        printf("La moyenne est de %f\n", result);
    }
}
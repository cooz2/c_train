#include <stdio.h>
#include <stdlib.h>

void sommeTableau(int *tableau, int tailleTableau); //valeur a l'adresse du pointeur du tableau et taille du tableau

int main(void)
{
    int tableau[4] = {4, 10, 32, 21}; //tableau addresse , tableau[1] valeur 1 du tableau

    sommeTableau(tableau, 4); //adresse tableau et taille tableau
    return 0;
}

void sommeTableau(int *tableau, int tailleTableau) //*tableau signifiant : je veux les valeurs a l'adresse du pointeur tableau
{
    int i = 0;
    for (i; i < 4; i++)
    {
        int sum = *(tableau + i) + sum++;
        printf("%d\n", sum);
    }
}

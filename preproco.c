#include <stdio.h> //le preprocesseur est un programme sous-jacent avant la compilation, pour le parametrage.

#define TVA 20
#define afficher printf // remplace printf par "afficher"

int main(void)
{
    int prixHT = 15;
    int prixTTC = 0;
    int prixTTC = prixHT + (prixHT * TVA / 100); //si demain la TVA passe a 25, j'aurai alors juste besoin de modifier la directive define (constante TVA)
    return 0;
}
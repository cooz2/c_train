#include <stdio.h>
#include <stdlib.h>

//Ecrire un programme C qui lit en entrée un caractère alphabétique entre a et y,
//qui peut être soit une majuscule ou une minuscule. Et affiche la lettre qui vient juste après lui dans l'ordre alphabétique.
int main(void)
{
    char lettre;
    printf("Donnez une lettre entre 'a' et 'y' ou entre 'A' et 'Y':\n");
    scanf("%c", &lettre);
    lettre += 1;
    printf("La lettre est : %c\n", lettre);
    return 0;
}
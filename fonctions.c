#include <stdio.h>

//prototype de fonction : si la fonction main est executee avant, elle peut omettre d'inclure la fonction init_ball dans son raisonnement, ainsi il
// est judicieux de declarer les fonctions du programme avant le main pour qu'il en prenne compte.

int init_ball(int posX)
{

    posX = 150; //la variable posX n'est presente que dans la fonction init_ball

    return posX; //un seul return par fonction pour retourner la variable
}

int main(void)
{
    // Exemple de fonction : printf(), scanf()

    int balleX; //la variable balleX n'est presente que dans la fonction main

    balleX = init_ball(balleX);
    printf("La positon de la balle est %d\n", balleX);

    //une partie ce fait ou la balle est initialisee a 0 et la position (x,y) change

    balleX = init_ball(balleX);
    printf("La position en fin de partie sera %d\n", balleX);

    return 0;
}
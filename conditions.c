#include <stdio.h>

int main(void)
{
    /*
        ==: egal a 
        !=: different de 
        < : plus petit que 
        > : plus grand que 
        <= : plus petit ou egal a
        >= : plus grand ou egal a 

        && : et avec 2 conditions remplies
        || : ou avec 1 condition remplie
        !  : 'Not'
    */

    /*   int nombre = 0;

    if (nombre == 0)
    {
        printf("Nombre vaut bien 0.\n", nombre);
    }
    else //qq chose au cas ou les condition echouent
    {
        printf("le nombre n'est pas egal a 0");
    }

    // int jeu_demarre = 1; // 1 = true, 0 = false */

    int age = -1;

    if (age < 1)
    {
        printf("Tu n'est pas ne.\n");
    }

    else if (age >= 1 && age <= 100)
    {
        printf("tu as un age compris entre 1 et 100ans\n");
    }

    else
    {
        printf("Tu est vieux");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    //printf("Alerte, les zombies nous envahissent !\n");
    //pour repeter sans copie/coller on peut faire une boucle pour repeter les instructions

    int i = 0;

    /*  while (i < 20)
    {
        printf("Alerte, les zombies nous envahissent !\n");
        i++; //incrementation permet de creer le compteur, =i+1+1+1..+20
    } */

    /* do
    {
        printf("Aya !!\n");
        i++;
    } while (i < 5); //la boucle do while ne verifie pas la premiere instruction, ainsi meme si i = 6 en entree, le printf sera affichee, la verification vient ensuite. (do 1, while 2...) */

    int i;

    for (i = 0; i < 5; i++) //plus condensee, utilSe pour les parcours : ( 1 ; 2 ; 3), 1 = initialisation, 2 = condition, 3 = execution et incrementation
    {
        printf("aya\n");
    }

    return 0;
}
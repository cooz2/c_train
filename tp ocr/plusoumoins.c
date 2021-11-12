#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choix;

int main(void)
{
    int retry = 1;
    int ask = 1;
    for (retry = 1; ask == retry;)
    {
        int nombreMystere = 0, choix = 0;
        const int MAX = 100, MIN = 1;
        int compteur = 0;

        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; //generation nombre aleatoire

        printf("Bienvenue dans le jeu du \"Plus ou Moins !\"\n");
        printf("Le but est de choisir le nombre genere aleatoirement en moins de coups possible ! Bonne chance.\n");

        do
        {
            printf("Quel est le nombre?\n");
            scanf("%d", &choix);

            if (choix > nombreMystere)
            {
                printf("C'est - \n");
                compteur++;
                printf("nombre d'essai(s) %d\n\n", compteur);
            }
            else if (choix < nombreMystere)
            {
                printf("C'est +\n");
                compteur++;
                printf("nombre d'essai(s) %d\n\n", compteur);
            }
            else
            {
                printf("Bravo c'est le nombre mystere !\n");
                compteur++;
                printf("nombre d'essai(s) %d\n\n", compteur);
                printf("Refaire une partie ? [1] = oui ; [0] = non\n");
                scanf("%d", &ask);
            }
        } while (choix != nombreMystere);
    }
    system("pause");
    return 0;
}

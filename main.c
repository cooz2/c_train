#include <stdio.h>

int main(void)
{
    //Variable de type int (entier)
    int aireDuCarre = 0;
    //Modification de la variable
    aireDuCarre = 12;

    //Nombre decimal declare avec 'float'
    float nombre = 124.3;
    //'Cast' conversion pour afficher le nombre entier dans 124.3
    int nombre_entier = (int)nombre;

    /* Drapeaux :
        %d : nombre entier (int)
        %f : flotant (float)
        %c : charactere (signed ou unsigned char)
        %s : chaine de caracteres (texte)
    */
    register int nbre = 5;
    volatile int autreNbre = 10; //sert juste lors de la manipulation de la memoire

    /* printf("%d ou %d ou %.2f\n", nombre_entier, aireDuCarre, nombre);
    */

    const float PI = 3.14; //const met en lecture seule
    printf("pi = %.2f\n", PI);
    //Pour ne pas modifier la valeur de la variable lors d'un prog on utilise 'const' ou la directive de preprocesseur #define

    return 0;
}
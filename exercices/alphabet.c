#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char lettre;
    printf("entre une lettre\n");
    scanf("%c", &lettre);

    if (lettre >= 'a' && lettre <= 'z')
        printf("Il s'agit d'une lettre");
    else if (lettre >= 'A' && lettre <= 'Z')
        printf("Il s'agit d'une lettre majuscule");
    else
        printf("ce n'est pas une lettre");
}
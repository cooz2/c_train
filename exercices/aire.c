#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double r1, r2, aire1, aire2, aire;
    printf("Merci de renseigner la valeur de 2 rayons :\n");
    scanf("%lf%lf", &r1, &r2);
    aire1 = 3.14 * r1 * r1;
    aire2 = 3.14 * r2 * r2;
    aire = fabs(aire1 - aire2);
    printf("l'aire de le surface entre les 2 cercles est: %.4lf\n", aire);
    return 0;
}
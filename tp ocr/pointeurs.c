#include <stdlib.h>
#include <stdio.h>

void decoupeMinutes(int *pointHeure, int *pointMin);

int main(void)
{
    int heures = 0;
    int minutes = 120;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int *pointHeure, int *pointMin)
{
    *pointHeure = *pointMin / 60;
    *pointMin = *pointMin % 60;
}
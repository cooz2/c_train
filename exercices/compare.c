#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Donnez 2 entiers : \n");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("%d est egal a %d", a, b);
    }
    else
    {
        if (a < b)
        {
            printf("%d est inferieur a %d", a, b);
        }
        else
        {
            printf("%d est superieur a %d", a, b);
        }
        return 0;
    }
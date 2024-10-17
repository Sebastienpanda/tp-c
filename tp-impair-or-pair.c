#include <stdio.h>

// g++ -o tp-impair-or-pair  ./tp-impair-or-pair.c
// ./tp-impair-or-pair.exe

main(void)
{
    int nbr;

    printf("Veuillez saisir un nombre : ");
    scanf("%d", &nbr);

    if (nbr % 2 == 1)
    {
        printf("%d est un nombre impair", nbr);
    }
    else
    {
        printf("%d  est un nombre pair", nbr);
    }
}
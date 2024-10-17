#include <stdio.h>
#include <math.h>

// g++ -o tp-compteur  ./tp-compteur.c
// ./tp-compteur.exe

main(void)
{
    int nbr, i;
    printf("Donner un chiffre : ", nbr);
    scanf("%d", &nbr);

    for (i = nbr + 1; i <= nbr + 10; i++)
    {
        printf("%d\n", i);
    }
}
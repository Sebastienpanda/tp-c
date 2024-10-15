#include <stdio.h>

// g++ -o tp-1  ./tp-1.c
// ./tp-1.exe

int main(void)
{
    int num_mois;

    printf("Veuillez saisir un numéro de mois");
    scanf("%d", &num_mois);

    switch (num_mois)
    {
    case 1:
        printf("Janvier");
        break;

    case 2:
        printf("Fevrier");
        break;

    case 3:
        printf("Mars");
        break;

    case 4:
        printf("Avril");
        break;

    case 5:
        printf("Mai");
        break;

    case 6:
        printf("Juin");
        break;

    case 7:
        printf("Juillet");
        break;

    case 8:
        printf("Aout");
        break;

    case 9:
        printf("Septembre");
        break;

    case 10:
        printf("Octobre");
        break;

    case 11:
        printf("Novembre");
        break;

    case 12:
        printf("Decembre");
        break;

    default:
        printf("Aucun mois ne correspond");
    }

    return 0;
}
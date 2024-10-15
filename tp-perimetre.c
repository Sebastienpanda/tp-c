#include <stdio.h>

int main()
{
    int largeur, longeur;
    float perimetre, surface;

    printf("Qu'elle est la longueur ?");
    scanf("%d", &largeur);

    printf("Qu'elle est la largeur ?");
    scanf("%d", &longeur);

    perimetre = (longeur + largeur) * 2;
    printf("Voici le périmètre %.2f \n", perimetre);

    surface = longeur * largeur;
    printf("Voici la surface %.2f \n", surface);
}
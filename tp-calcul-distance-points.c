#include <stdio.h>
#include <math.h>

// g++ -o tp-calcul-distance-points  ./tp-calcul-distance-points.c
// ./tp-calcul-distance-points.exe

main(void)
{
    float Xa, Ya, Xb, Yb;
    float AB;

    printf("Veuillez entrer la cordonnee X de A : ");
    scanf("%f", &Xa);
    printf("Veuillez entrer la cordonnee Y de A : ");
    scanf("%f", &Ya);
    printf("Veuillez entrer la cordonnee X de B : ");
    scanf("%f", &Xb);
    printf("Veuillez entrer la cordonnee Y de B : ");
    scanf("%f", &Yb);

    AB = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));

    printf("Voici la distance entre le point A et B : %.2f", AB);
}
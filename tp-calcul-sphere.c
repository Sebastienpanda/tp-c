#include <stdio.h>
#include <math.h>

// g++ -o tp-calcul-sphere  ./tp-calcul-sphere.c
// ./tp-calcul-sphere.exe

int main()
{

    float v, r;
    const float Pi = 3.14;

    printf("Veuillez entrer le rayon du sphere : ");
    scanf("%f", &r);

    v = (4 * Pi * pow(r, 3)) / 3;
    printf("Le volume de la sphère est %.2f\n", v);
    return 0;
}
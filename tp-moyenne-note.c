#include <stdio.h>

int main()
{
    float N1, N2, N3, N4, N5, somme, result;

    printf("Taper vos 5 notes : ");
    scanf("%f%f%f%f%f", &N1, &N2, &N3, &N4, &N5);

    somme = N1 + N2 + N3 + N4 + N5;
    result = somme / 5;

    printf("Voici la somme %.2f \n", somme);
    printf("Voici le résultat %.2f \n", result);
}
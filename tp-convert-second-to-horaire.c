#include <stdio.h>

// g++ -o tp-convert-second-to-horaire  ./tp-convert-second-to-horaire.c
// ./tp-convert-second-to-horaire.exe

main(void)
{
    int t, h, m, s, r;

    printf("Veuillez entrer la duree en seconde : ");
    scanf("%d", &t);
    h = t / 3600;
    r = t % 3600;
    m = r / 60;
    s = r % 60;

    printf("%dH : %dM : %dS", h, m, s);
}
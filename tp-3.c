#include <stdio.h>

// g++ -o tp-3  ./tp-3.c
// ./tp-3.exe

int main(void)
{

    int n; // numérateur
    int d; // démoniteur
    int q; // quotien
    int r; // reste

    printf("Saisir le numérateur :");
    scanf("%d", &n);

    printf("Saisir le démoniteur :");
    scanf("%d", &d);

    q = n / d;
    r = n % d;

    printf("%d / %d = %d \n", n, d, n / d);
    printf("Le quotien de la division est %d \n", q);
    printf("Le reste de la division est %d \n", r);

    return 0;
}
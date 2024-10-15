#include <stdio.h>

// g++ -o tp-echange-variable  ./tp-echange-variable.c
// ./tp-echange-variable.exe

int main()
{

    float a, b, c;

    printf("Entrer la valeur de A : ");
    scanf("%f", &a);

    printf("Entrer la valeur de B : ");
    scanf("%f", &b);

    printf("Voici la valeur de A %.2f \n", a);
    printf("Voici la valeur de B %.2f \n", b);

    c = a;
    a = b;
    b = c;

    printf("Voici la valeur de A inversé %.2f \n", a);
    printf("Voici la valeur de B inversé %.2f \n", b);

    return 0;
}
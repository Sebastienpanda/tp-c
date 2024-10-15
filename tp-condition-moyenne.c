#include <stdio.h>

// g++ -o tp-condition-moyenne  ./tp-condition-moyenne.c
// ./tp-condition-moyenne.exe

main()
{

    float N1, N2, N3, result;

    printf("Entrer les notes : ");
    scanf("%f%f%f", &N1, &N2, &N3);

    result = (N1 + N2 + N3) / 3;

    printf("Resultat %.2f \n", result);

    if (result < 10)
    {
        printf("Insuffisant");
    }
    else if (result < 12)
    {
        printf("Passable");
    }
    else if (result < 14)
    {
        printf("Assez bien");
    }
    else if (result < 16)
    {
        printf("Bien");
    }
    else
    {
        printf("Très bien");
    }
}
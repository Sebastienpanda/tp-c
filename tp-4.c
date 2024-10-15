#include <stdio.h>

// g++ -o tp-4  ./tp-4.c
// ./tp-4.exe

int main(void)
{

    int n;

    printf("Entrer un nombre :");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Nombre pair \n");
    }
    else
    {
        printf("Nombre impair \n");
    }

    printf("Fin du programme");

    return 0;
}
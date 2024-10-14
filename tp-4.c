#include <stdio.h>

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
#include <stdio.h>

// g++ -o tp-imposable  ./tp-imposable.c
// ./tp-imposable.exe

main(void)
{
    char gender;
    int age;

    printf("Qu'elle est votre genre : ");
    scanf("%c", &gender);

    printf("Qu'elle est votre age : ");
    scanf("%d", &age);

    if (gender == 'H')
    {
        if (age > 20)
        {
            printf("Vous etes imposable !");
        }
        else
        {
            printf("Vous etes pas imposable !");
        }
    }
    else if (gender == 'F')
    {
        if (age > 18 && age < 35)
        {
            printf("Vous etes imposable !");
        }
        else
        {
            printf("Vous etes pas imposable !");
        }
    }
}
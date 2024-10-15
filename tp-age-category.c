#include <stdio.h>

int main()
{

    int age;
    printf("Indiquer votre âge : ");
    scanf("%d", &age);

    if (age >= 6 && age <= 7)
    {
        printf("Vous êtes un poussin\n");
    }
    else if (age >= 8 && age <= 9)
    {
        printf("Vous êtes un pupille\n");
    }
    else if (age >= 10 && age <= 11)
    {
        printf("Vous êtes un minime\n");
    }
    else
    {
        printf("Vous êtes un cadet\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int annee_naissance, age;

    printf("Qu'elle année de naissance avez vous ?");
    scanf("%d", &annee_naissance);
    age = 2024 - annee_naissance;

    printf("Vous avez %d ans :", age);
}
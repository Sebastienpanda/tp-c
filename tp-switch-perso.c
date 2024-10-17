#include <stdio.h>

// g++ -o tp-switch-perso  ./tp-switch-perso.c
// ./tp-switch-perso.exe

main(void)
{
    int pas;

    printf("De combien de pas voulez vous avancer ? ");
    scanf("%d", &pas);

    switch (pas)
    {
    case 6:
        printf("Le personnage va a droite");
        break;
    case 4:
        printf("Le personnage va a gauche");
        break;
    case 8:
        printf("Le personnage va en haut");
        break;
    case 2:
        printf("Le personnage va en bas");
        break;

    default:
        printf("Erreur de saisie, le personnage ne bouge pas");
        break;
    }
}
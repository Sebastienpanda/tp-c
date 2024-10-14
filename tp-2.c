#include <stdio.h>

int main(void)
{
    int a;
    int b;
    char operator;

    printf("Veuillez saisir un nombre");
    scanf("%d", &a);
    printf("Veuillez saisir un deuxième nombre");
    scanf("%d", &b);
    printf("Veuillez saisir un opérator \n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Addition a + b = %d \n", a + b);
        break;

    case '-':
        printf("Soustraction a - b = %d \n", a - b);
        break;

    case '*':
        printf("Multiplication a * b = %d \n", a * b);
        break;

    case '/':
        printf("Division a / b = %d \n", a / b);
        break;

    default:
        printf("Operator not found");
        break;
    }

    printf("Fin de calcul \n");

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, result;

    printf("Donnez la valuer X : ");
    scanf("%f", &x);

    printf("Donnez la valeur Y : ");
    scanf("%f", &y);

    result = pow(x, y);

    printf("Voici le résultat %.2f \n", result);
}
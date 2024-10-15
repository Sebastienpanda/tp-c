#include <stdio.h>

// g++ -o main  ./main.c
// ./main.exe

int main()
{
    int age;

    printf("Quel âge avez vous ?");
    scanf("%d", &age);
    printf("Vous avez %d an(s)\n", age);
}
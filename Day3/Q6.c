// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int F, S, temp;

    printf("First Digit:    ");
    scanf("%i", &F);

    printf("Second Digit:   ");
    scanf("%i", &S);

    printf("Before Swap: %i  %i\n", F, S);

    temp = F;
    F = S;
    S = temp;

    printf("After Swap: %i  %i\n", F, S);

    return 0;
}

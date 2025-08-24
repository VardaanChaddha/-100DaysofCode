// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int F, S;

    printf("First Digit: ");
    scanf("%i", &F);

    printf("Second Digit:  ");
    scanf("%i", &S);

    printf("\nBefore Swap: %i  %i\n", F, S);
    printf("After Swap: %i  %i\n", S, F);

    return 0;
}
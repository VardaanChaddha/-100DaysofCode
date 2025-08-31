// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int k;
    printf("enter the number:   ");
    scanf("%d", &k);
    if (k > 0)
        printf("the value is Positive");
    else if (k < 0)
        printf("the value is Negative");
    else
        printf("the value is Zero which is neither Positive nor Negative.");
    return 0;
}
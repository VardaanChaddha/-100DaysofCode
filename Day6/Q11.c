// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int k;
    printf("Enter the value of k:   ");
    scanf("%d", &k);

    if (k % 2 == 0)
        printf("The value of k is EVEN");
    else
        printf("The value of k is ODD");
    return 0;
}
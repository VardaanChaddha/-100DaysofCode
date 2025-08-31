// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{

    int a;
    printf("Enter a year:   ");
    scanf("%d", &a);

    if (a % 400 == 0)
    {
        printf("It is a leap year");
    }

    else if (a % 4 == 0 && a % 100 != 0)
    {
        printf("It is a leap year");
    }

    else
        printf("It is NOT a leap year");

    return 0;
}
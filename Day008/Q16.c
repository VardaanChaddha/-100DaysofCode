// Q16: Write a program to input three numbers and find the largest among them using if-else.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number:     ");
    scanf("%d", &a);
    printf("Enter the second number:     ");
    scanf("%d", &b);
    printf("Enter the third number:     ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("First number i.e. %d is the largest", a);
    }
    else if (b > a && b > c)
    {
        printf("Second number i.e. %d is the largest", b);
    }
    else if (c > a && c > b)
    {
        printf("Third number i.e. %d is the largest", c);
    }

    return 0;
}
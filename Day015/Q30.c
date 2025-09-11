// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int n, opp = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        opp = n % 10;
        printf("%d", opp);
        n = n / 10;
    }

    return 0;

}

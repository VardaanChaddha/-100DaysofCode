// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int n, product = 1, num = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (num <= n)
    {
        product = product * num;
        num = num + 1;
    }

    printf("%d", product);
    
    return 0;
}
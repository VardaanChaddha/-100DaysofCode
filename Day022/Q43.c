#include <stdio.h>
/*Q43: Write a program to check if a number is a strong number.*/
int main()
{
    int num, div, product , sum = 0, g;
    printf("enter the value of your number\n");
    scanf("%d", &num);
    g = num;
    while (num > 0)
    {
        div = num % 10;
        product = 1;
        while (div > 0)
        {
            product *= div;
            div -= 1;
        }
        sum = sum + product;
        num /= 10;
    }
    if (sum == g)
        printf("Your number is a strong number");
    if (sum != g)
        printf("Your number is not a strong number");
    return 0;
}
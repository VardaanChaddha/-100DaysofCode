// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{

    int num1;
    printf("First Digit:    ");
    scanf("%i", &num1);

    int num2;
    printf("Second Digit:   ");
    scanf("%i", &num2);

    int sum, difference, product, quotient;
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("sum = %i + %i = %i\n", num1, num2, sum);
    printf("difference = %i - %i = %i\n", num1, num2, difference);
    printf("product = %i x %i = %i\n", num1, num2, product);
    printf("quotient = %i / %i = %i\n", num1, num2, quotient);

    return 0;
}
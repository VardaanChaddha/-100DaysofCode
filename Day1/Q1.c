// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int num1;
    printf("First digit:    ");
    scanf("%i", &num1);

    int num2;
    printf("Second digit:   ");
    scanf("%i", &num2);

    int sum;
    sum = num1 + num2;

    printf("Ans. %i + %i = %i", num1, num2, sum);

    return 0;
}
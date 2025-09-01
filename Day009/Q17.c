// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, det, x, y;

    printf("Enter the first number:   ");
    scanf("%d", &a);

    printf("Enter the second number:   ");
    scanf("%d", &b);

    printf("Enter the third number:   ");
    scanf("%d", &c);

    det = pow((b), 2) - 4 * a * c;

    if (det > 0)
    {
        x = (-b + (pow(det, 1 / 2))) / 2 * a;
        y = (-b - (pow(det, 1 / 2))) / 2 * a;
        printf("\nRoots are real and different: %d and %d", x, y);
    }
    else if (det < 0)
    {
        printf("\nRoots are complex");
    }
    else if (det == 0)
    {
        x = (-b + (pow(det, 1 / 2))) / 2 * a;
        printf("\nRoots are real and same: %d", x);
    }
}

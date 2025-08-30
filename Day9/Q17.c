// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, det, k, h;
    printf("enter the 3 numbers a b c:   ");
    scanf("%d %d %d", &a, &b, &c);
    det = pow((b), 2) - 4 * a * c;
    if (det > 0)
    {
        k = (-b + pow((pow((b), 2) - 4 * a * c), 1 / 2)) / 2 * a;
        h = (-b - pow((pow((b), 2) - 4 * a * c), 1 / 2)) / 2 * a;
        printf("the roots are real and distinct %d\n %d\n", k, h);
    }
    else if (det == 0)
    {
        k = -b / 2 * a;
        h = k;
        printf("the roots are real and equal %d\n %d\n", k, h);
    }
    else if (det < 0)
        printf("the roots are complex");
    return 0;
}
// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first side:   ");
    scanf("%d", &a);
    printf("Enter the second side:   ");
    scanf("%d", &b);
    printf("Enter the third side:   ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\nTriangle is Valid");
        if (a == b && b == c && a == c)
        {
            printf("\nIt is an Equilateral triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("\nIt is an Isosceles triangle");
        }
        else
        {
            printf("\nIt is a Scalene triangle");
        }
    }

    else
    {
        printf("\nTriangle is Not Valid");
    }

    return 0;
}


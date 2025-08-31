//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int L;
    printf("Enter the Length:   ");
    scanf(" %i", &L);

    int W;
    printf("Enter the Width:    ");
    scanf(" %i", &W);

    int A;
    int P;

    A = L * W;
    P = 2 * (L + W);

    printf("Perimeter = 2 (Lenght + Width) = 2 (%i + %i) = %i\n", L, W, P);
    printf("Area = Length x Breadth = %i x %i = %i\n", L, W, A);

    return 0;
}

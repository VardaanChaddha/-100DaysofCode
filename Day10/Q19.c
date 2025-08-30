//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int ab, bc, ca;
    printf("enter the value of sides A B C:   ");
    scanf("%d %d %d", &ab, &bc, &ca);
    if (ab == bc && bc == ca && ca == ab)
        printf("the triangle is equilateral");
    else if (ab == bc || bc == ca || ca == ab)
        printf("the triangle is isosceles");
    else
        printf("the triangle is scalene");
    return 0;
}
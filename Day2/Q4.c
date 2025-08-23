//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){

    int radius;
    printf("Radius:     ");
    scanf("%i", &radius);

    float area, perimeter;
    area = 3.1415 * radius * radius;
    perimeter = 6.2840 * radius;

    printf("Area = pie x R^2 = %.2f\n", area);
    printf("Circumference = 2 x pie x R = %.2f\n", perimeter);

    return 0;
}
// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    int C, F;
    printf("Enter *C:   ");
    scanf(" %i", &C);

    F = (C * 9 / 5) + 32;

    printf("Farenhiet = (Celcius x 9/5) + 32 = (%i*C x 9/5) + 32 = %i*F\n", C, F);

    return 0;
}

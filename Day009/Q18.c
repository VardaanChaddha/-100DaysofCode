// Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main()
{
    int per;
    printf("Enter the value of percentage: ");
    scanf("%d", &per);

    if (per >= 90 && per <= 100)
        printf("Grade A");
        
    else if (per >= 80 && per < 90)
        printf("Grade B");
        
    else if (per >= 70 && per < 80)
        printf("Grade C");
        
    else if (per >= 60 && per < 70)
        printf("Grade D");
        
    else if (per >= 50 && per < 60)
        printf("Grade E");
        
    else if (per < 50 && per >= 0)
        printf("Grade F");
        
    else
        printf("Invalid input");

    return 0;

}

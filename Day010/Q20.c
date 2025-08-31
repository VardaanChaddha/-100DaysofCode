// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main()
{
    int day;
    printf("Enter the Day:   ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    default:
        printf("SUNDAY");
    }
    return 0;
}
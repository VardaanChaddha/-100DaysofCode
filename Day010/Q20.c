//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a number (1-7):   ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;
    
    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;
        
    default:
        printf("Wrong Input");
        break;
    }

    return 0;
}

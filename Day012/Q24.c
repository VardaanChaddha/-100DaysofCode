/*Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

#include <stdio.h>

int main()
{
    int units, bill;
    printf("Enter number of units:      ");
    scanf("%d", &units);

    if (units <= 100 && units >= 0)
    {
        bill = units * 5;
        printf("Your bill is %d", bill);
    }
    else if (units > 100 && units <= 200)
    {
        bill = 500 + (units - 100) * 7;
        printf("Your bill is %d", bill);
    }
    else if (units > 200 && units <= 300)
    {
        bill = 1200 + (units - 200) * 10;
        printf("Your bill is %d", bill);
    }
    else if (units > 300)
    {
        bill = 2200 + (units - 300) * 12;
        printf("Your bill is %d", bill);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}
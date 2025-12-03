#include <stdio.h>
/*Q47: Write a program to print the following pattern:
 *
 **
 ***
 ****
 ***** */
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int h = 1; h <= i; h++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
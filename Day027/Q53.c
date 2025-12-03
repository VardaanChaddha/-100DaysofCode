#include <stdio.h>
/*Q53: Write a program to print the following pattern:
 *
 ***
 *****
 *******
 *********
 *******
 *****
 ***
 * */
int main()
{
    int i = 1, h = 1, g = 1, count = 1, x = 7, y = 1, z = 1, num = 1;
    while (i <= 9)
    {
        while (h <= i && i % 2 != 0)
        {
            printf("*");
            h += 1;
        }
        if (count % 2 != 0)
            printf("\n");
        h = g;
        i += 1;
        count += 1;
    }
    while (x >= 1)
    {
        while (y <= x && x % 2 != 0)
        {
            printf("*");
            y += 1;
        }
        if (num % 2 != 0)
            printf("\n");
        y = z;
        x -= 1;
        num += 1;
    }
}
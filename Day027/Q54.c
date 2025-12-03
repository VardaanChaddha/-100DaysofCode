#include <stdio.h>
/* Q54: Write a program to print the following pattern:

 *

***

*****
*******
***

* */
int main()
{
    int i = 1, h = 1, count = 1, r = 1, x = 3, y = 1, z = 1, num = 0;
    while (i <= 7)
    {
        while (h <= i && i % 2 != 0)
        {
            printf("*");
            h += 1;
        }
        if (count % 2 != 0 && count <= 3)
        {
            printf("\n\n");
        }
        if (count == 7 || count == 5 )
        {
            printf("\n");
        }
        h = r;
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
        if (num == 1)
            printf("\n\n");
        y = z;
        x -= 1;
        num += 1;
    }
    return 0;
}
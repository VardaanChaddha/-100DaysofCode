#include <stdio.h>
/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
int main()
{
    int h, g = 5, k = 5 , count = 1 , y = 1;
    h = g;
    for (int i = 1; i <= 5; i++)
    {    count = y;
        while (count <= k - 1)
        {
            printf(" ");
            count += 1;
        }
        k -= 1;
        while (h <= 5)
        {
            printf("%d", h);
            h += 1;
        }
        printf("\n");
        g -= 1;
        h = g;
    }
    return 0;
}
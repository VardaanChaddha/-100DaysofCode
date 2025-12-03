#include <stdio.h>
/*Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        * */
int main()
{ int count = 1, ori = 0, g = 1;
    for (int i = 1; i <= 5; i++)
    {
        count = g;
        while (count <= ori)
        {
            printf(" ");
            count += 1;
        }
        ori += 2;
        for (int h = 5; h >= i;)
        {
            printf("*");
            h -= 1;
        }
        printf("\n");
    }
    return 0;

}
#include <stdio.h>
/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
int main()
{
     int n, i = 1, h = 3, g = 4, total = 1;
     double sum = 1;
     printf("enter the no of terms\n");
     scanf("%d", &n);
     while (i < n)
     {
          sum = sum + (double)h / g;
          h += 2;
          g += 2;
          i += 1;
     }
     printf("The value of your terms is %lf", sum);
     return 0;
}
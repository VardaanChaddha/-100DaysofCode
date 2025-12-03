#include <stdio.h>
 /*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
  int main(){ int n , h = 2 , g = 3 , i = 1;
              double sum = 0;
              printf("enter the value of terms up until which you want to product\n");
              scanf("%d" , &n);
              while (i <= n)
              {sum = sum + (double)h/g;
                h += 2;
                g += 4;
                i += 1;
            }
              printf("the value of your product is %lf" , sum);
              return 0;
  }
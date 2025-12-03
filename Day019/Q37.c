#include <stdio.h>
/*Write a program to find the LCM of two numbers*/
   int main(){ int k , h , i = 1 , div, ori, product = 0 , count = 0;
               printf("enter the value of k and h\n");
               scanf("%d %d" , &k , &h);
               while (k > 0 && h > 0 && count == 0)
                {div = i % k;
                ori = i % h;
                if (div == 0 && ori == 0)
                  { div = i / k;
                   ori = i / h;
                   product = div * ori;
                   count += 1;} 
                   i += 1;}
                printf("the value of your LCM is %d\n" , product);
                return 0;
                  }
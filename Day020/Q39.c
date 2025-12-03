#include <stdio.h>
/*Q39: Write a program to find the product of odd digits of a number.*/
   int main(){ int num , div , product = 1;
               printf("enter the value of number\n");
               scanf("%d" , &num);
               while (num > 0 )
                {div = num % 10;
                    if ((div + 1) % 2 == 0)
                       product *= div;
                 num /= 10;}
                 printf("the value of your product is %d\n" , product);
                 return 0;
                }
                
#include <stdio.h>
/*Q42: Write a program to check if a number is a perfect number.*/
   int main(){ int num , div , sum = 0 , i = 1;
               printf("enter the value of number\n");
               scanf("%d" , &num);
               while (num > 0 && i < num)
                {div = num % i;
                  if (div == 0)
                    sum = sum + i;
                  i += 1;}
                    if (sum == num)
                       printf("Your number is a perfect number");
                    else
                       printf("Your number is not a perfect number");
                return 0;
   }
#include <stdio.h>
/*write a program to check if a number is prime*/
 int main(){ int num , count = 0 , i = 2 , ori = 0;
             printf("enter the value of num\n");
             scanf("%d" , &num);
             ori = num;
             while (num > 0 && i < num)
             {num %= i;
               if (num == 0)
                 {count += 1;}
              num = ori;
             i = i + 1;}
             if (count > 0)
                printf("Your number is not a prime number");
             else 
                printf("Prime Number");
             return 0;
             }
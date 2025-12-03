#include <stdio.h>
/*write a program to find the sum of digits of a number*/
 int main(){ int num , sum , total = 0;
             printf("enter the value of your number\n");
             scanf("%d" , &num);
             while (num>0)
                  {sum = num % 10;
                  total = total + sum;
                  num /= 10;}
                  printf("the value of your total is %d\n" , total);
            return 0;
 }
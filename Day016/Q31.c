#include <stdio.h>
/*Write a program to take a number and print its equivalent binary representation*/
 int main(){ int num , binary=0 , digit , result=0 , count=0 , i=0;
             printf("enter the value of number\n");
             scanf("%d" , &num);
            while (num > 0)
             {digit = num % 2;
              binary = binary * 10 + digit;
              num /= 2;
              count++; }
            while (i < count)
               {result = binary % 10;
               printf("%d", result);
               binary /= 10;
               i++;}
             return 0;
 }
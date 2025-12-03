#include <stdio.h>
/* Q55: Write a program to print all the prime numbers from 1 to n. */
 int main(){ int i = 2 , num , h = 2 , y = 0 , z = 2 , x = 0;
             printf("enter the value of number\n");
             scanf("%d" , &num);
             while (i <= num)
             {while (h < i)
               { if (i % h == 0)
                    {y += 1;} 
                     h += 1;}
                 if (y == 0)
                {printf("%d" , i);
                 printf(" ");}
                 h = z;
                 y = x;
                 i +=  1;}
                 return 0;
                }
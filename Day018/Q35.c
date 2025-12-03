#include <stdio.h>
/*Write a program to printf all factors of a given number*/
 int main(){ int num , ori , div , i=1;
             printf("enter the value of number\n");
             scanf("%d" , &num);
             ori = num;
             while (num > 0 && i <= num)
             {div = num % i;
             if (div == 0)
              {   printf("%d" , i);
                  printf(" ");    }
             num = ori;
             i += 1;}
             return 0;
 }
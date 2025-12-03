#include <stdio.h>
/*Q73: Find the sum of each row of a matrix and store it in an array.*/
 int main(){ int a , b , d  = 0 , e = 0 , f = 0 , g = 0 , sum = 0;
             printf("Enter the number of rows you want in your array\n");
             scanf("%d" , &a);
             printf("Enter the number of columns you want in your array\n");
             scanf("%d" , &b);
             int c[a][b];
             while (d < a)
             {
               while (e < b)
               {
                printf("Enter the next value you want in your array c[%d][%d]\n" , d , e);
                scanf("%d" , &c[d][e]);
                e += 1;
               }
               d += 1;
               e = 0;
             }
             while (f < a)
             {
              while(g < b)
              {
                sum = sum + c[f][g];
                g += 1;
              }
              printf("The total of row %d is %d" , f , sum);
              printf("\n");
              sum = 0;
              f += 1;
              g = 0;
             }
             return 0;

 }
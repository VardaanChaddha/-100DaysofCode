#include <stdio.h>
/*Q72: Find the sum of all elements in a matrix.*/
 int main(){ int a , b , d = 0 , e = 0 , f = 0 , g = 0 , sum = 0;
             printf("Entert the number of rows you want in your array\n");
             scanf("%d" , &a);
             printf("enter the number of rows you want in your array\n");
             scanf("%d" , &b);
             int c[a][b];
             while (e < a)
             {
                while (d < b)
                {
                 printf("Enter the next element you want in your array c[%d][%d]\n" , e , d);
                 scanf("%d" , &c[e][d]);
                 d += 1;
                }
                d = 0;
                e += 1;
             }
             while (g < a)
             {
                while (f < b)
                {
                 sum = sum + c[g][f];
                 f += 1;
                }
                f = 0;
                g += 1;
             }
            printf("The sum of all the elements present in your array is %d" , sum);
            return 0;
         }
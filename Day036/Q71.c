#include <stdio.h>
/*Q71: Read and print a matrix.*/
 int main(){ int a , b , d = 0 , e = 0 , f = 0 , g = 0;
             printf("Enter the rows you want in your array\n");
             scanf("%d" , &a);
             printf("Enter the columns you want in your array\n");
             scanf("%d" , &b);
             int c[a][b];
             while (e < a)
             {
              while (d < b)
              {printf("Enter the element you want in your columns c[%d][%d]\n" , e , d);
              scanf("%d" , &c[e][d]);
              d += 1;}
              d = 0;
              e += 1;
             }
             while (f < a)
             {
               while(g < b)
               {
                printf("%d" , c[f][g]);
                printf(" ");
                g += 1;
               }
               printf("\n");
               g = 0;
               f += 1;
             }
             return 0;
 }
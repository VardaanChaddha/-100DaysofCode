#include <stdio.h>
/*Q74: Find the transpose of a matrix.*/
  int main(){ int a , b , d = 0 , e = 0 , f = 0 , g = 0;
              printf("Enter the number of rows you want in your array\n");
              scanf("%d" , &a);
              printf("Enter the number of columns you want in your array\n");
              scanf("%d" , &b);
              int  c[a][b];
              while (e < a)
              {
                while (d < b)
                {
                 printf("Enter the next value you want in your array c[%d][%d]\n" , e , d);
                 scanf("%d" , &c[e] [d]);
                 d += 1;
                }
                d = 0;
                e += 1;
              }
              while (f < b) 
              {
                while (g < a)
                {
                    printf("%d" , c[g][f]);
                    printf(" ");
                    g += 1;
                }
                printf("\n");
                f += 1;
                g = 0;
              }
              return 0;
  }
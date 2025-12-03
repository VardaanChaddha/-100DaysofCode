#include <stdio.h>
/*Q78: Find the sum of main diagonal elements for a square matrix.*/
 int main(){ int a , b , d = 0 , e = 0 , g = 0 , h = 0 , sum =0;
             printf("Enter the number of rows you want  in your array\n");
             scanf("%d" , &a);
             printf("Enter the number of columns you want in your array\n");
             scanf("%d" , &b);
             int c[a][b];
            if (a != b)       
             printf("Please make sure that the matrix which you entered is a square matrix as addition is only possible in square matrix");
            if (a == b)
            { while (d < a)
             {
                while (e < b)
                {
                    printf("Enter the next value you want  in your matrix c[%d][%d]\n" , d , e);
                    scanf("%d" , &c[d][e]);
                    e += 1;
                }
                e = 0;
                d += 1;
            }
            while (g < a && h < b)
            {
                if (g == h)
                {
                  sum += c[g][h];
                }
                g += 1;
                h += 1;
            }
            printf("The sum of all the diagonal elements in yoru array is %d" , sum);}
            return 0;


 }
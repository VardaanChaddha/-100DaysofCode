#include <stdio.h>
/* Q76 Check if a matrix is symmetric.*/
 int main(){ int a , b , d = 0 , e = 0 , f = 0 , g = 0 , h = 0, i = 0 , count = 0 , result = 0;
             printf("PLASE MAKE SURE THAT THE MATRIX WHICH YOU ARE THINKING OF OUGHT TO HAVE SAME NUMBER OF ROWS AND COLUMNS\n\n");
             printf("Enter the number of rows you want in your matrix\n");
             scanf("%d" , &a);
             printf("Enter the number of  columns you want in your matrix\n");
             scanf("%d" , &b);
             if (a != b)
             {
                printf("I GUESS YOU DO NOT LIKE TO READ MUCH ANYWAYS . LETS REVISIT WHAT I SAID ONCE AGAIN INPUT MUST HAVE SAME NUMBER OF ROWS AND COLUMNS\n");
             }
             if (a == b)
             {int c[a][b] , k[a][b];
             while (d < a)
             {
                while (e < b)
                {
                    printf("enter the next value which you wnat in your matrix c[%d][%d]\n" , d , e);
                    scanf("%d" , &c[d][e]);
                    e += 1;
                }
                e = 0;
                d += 1;
             }
             while (f < b)
             {
                while (g < a)
                {
                  k[f][g] = c[g][f];
                  g += 1;
                }
                g = 0;
                f += 1;
             }
             while (h < a && count == 0)
             {
                while (i < b && count == 0)
                {
                  if(k[h][i] != c[h][i])
                  {
                    count += 1;
                    printf("The matrix which you entered is not symmetric\n");
                    break;
                  }
                  if (k[h][i] == c[h][i])
                  {
                    result += 1;
                  }
                  i += 1;
                }
                i = 0;
                h += 1;
             }
             if (result == a * b)
             {
              printf("Your matrix is symmetric\n");
             }}
             return 0;
    
 }
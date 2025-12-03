#include <stdio.h>
/*Q75 Add two matrices.*/
  int main(){ int a , b , d = 0 , e = 0 , f = 0 , g = 0 , h = 0 , i = 0 , sum = 0 , x = 0 , y = 0 , s = 0 , r = 0;
              printf("PLEASE MAKE SURE THAT THE MATRIX IN YOUR MIND MUST BE SAME IN BOTH ROWS AND COLUMNS AS ONLY SAME MATRIXES IN BOTH ROWS AND COLUMNS ARE POSSIBLE TO ADD WITH EACH OTHER\n\n");
              printf("Enter the number of rows you want in both of your array\n");
              scanf("%d" , &a);
              printf("Enter the number of columns you want in both of your array\n");
              scanf("%d" , &b);
              int c[a][b] , k[a][b] , z[a][b];
              while (d < a)
              {
                while (e < b)
                {
                    printf("Enter the next  value you want in your array c[%d][%d]\n" , d , e);
                    scanf("%d" , &c[d][e]);
                    e += 1;
                }
                d += 1;
                e  = 0;
              }
               while (f < a)
               {
                while (g < b)
                {
                  printf("enter the next value you want  in your second array k[%d][%d]\n" , f , g);
                  scanf("%d" , &k[f][g]);
                  g += 1;
                }
                f += 1;
                g = 0;
               }
              while (h < a && x < a)
              {
                while (i < b && y < b)
                {
                    sum += c[h][i] + k[h][i];
                    z[x][y] = sum;
                    i +=1;
                    y +=1;
                }
                h += 1;
                i = 0;
                x +=1;
                y = 0;
              }
              while (s < a)
              {
                while (r < b)
                {
                  printf("%d" , z[s][r]);  
                  printf(" ");
                  r += 1;
                }
                printf("\n");
                r = 0;
                s += 1;
              }
              return 0;
            }
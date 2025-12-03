#include <stdio.h>
/* Q67: Insert an element in an array at a given position. */
int main(){ int a , b , d =0 , e , f , h = 0 , x = 0 , y,  z , m , n = 0 , s = 0 , count = 0;
            printf("Enter the length you want your array to be off\n");
            scanf("%d" , &a);
            int c[a] , k[a];
            while (d < a)
            {
             printf("enter the next value you want in your array c[%d]\n" , d);
             scanf("%d" , &c[d]);
             d += 1;
            }
            printf("enter the postion at which you want to insert the element\n");
            scanf("%d" , &e);
            printf("Enter the element which you want to enter at the position %d\n" , e);
            scanf("%d" , &f);
            while (h < a && s < a)
            {
             k[h] = c[s];
             s += 1;
             h += 1;
            }
            while (x < a && count == 0)
            { 
             if (x == e)
             { y = e;
               while(y < a)
               {z = y + 1;
               c[z] = k[y];
               y += 1;
               c[e] = f;
               count += 1;}
             }
             x += 1;
            }
            m = z;
            while (n <= m)
            {
             printf("%d" , c[n]);
             printf(" ");
             n += 1;
            }
            return 0;
        }
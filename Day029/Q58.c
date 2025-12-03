#include<stdio.h>
/*Q58: Find the maximum and minimum element in an array.*/
int main(){ int a , b = 0 , d = 0 , x = 0 , y = 1 , g = 0 , h = 0 , s , e;
            printf("enter the length you want your array to be off\n");
            scanf("%d" , &a);
            int c[a];
            while(d < a)
            { printf("enter the next value you want in the array c[%d]" , a);
              scanf("%d" , &c[d]);
              d += 1;
           } e = c[0];
             s = c[0];
            while(x < y && y < a)
            {
              if (c[x] >= c[y])
              {g = c[x];
               e = c[y];}
              if (c[x] <= c[y])
              {h = c[x];
               s = c[y];}
              x += 1;
              y += 1;}
            if (h >= e)
             printf("The smallest possible value of all the values entered by you is %d\n" , e);
            if (h <= e)
             printf("The smallest possible value of all the values entered by you is %d\n" , h);
            if (s >= g)
             printf("The highest possible value of all the values entered by you is %d\n" , s);
            if (s <= g)
             printf("The highest possible value of all the values entered by you is %d\n" , g);
            
            return 0;
}
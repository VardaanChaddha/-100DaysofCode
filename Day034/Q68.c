#include <stdio.h>
/*Q68: Delete an element from an array.*/
int main(){ int a , b , d = 0 , e , h = 0 , y = 0 , z = 0 , s , r , t = 0 , count = 0;
            printf("enter the length you want your array to be off\n");
            scanf("%d" , &a);
            int c[a] , k[a];
            while (d < a)
            {
             printf("enter the next value you want in your array c[%d]\n" , d);
             scanf("%d" , &c[d]);
             d += 1;
            }
            printf("enter the position from where you want to  delete the element\n");
            scanf("%d" , &e);
            while (y < a && z < a)
            {
             k[y] = c[z];
             y += 1;
             z += 1;
            }
            while (h < a && count == 0)
            {
              if (h == e)
              {  s = e;
                while (s < a)
                { r = s + 1;
                 c[s] = k[r];
                  s += 1;
                }
                count += 1;
              } h += 1;
            }
            while (t <= a - 2)
            {
             printf("%d" , c[t]);
             printf(" ");
             t += 1;
            }
            return 0;

}
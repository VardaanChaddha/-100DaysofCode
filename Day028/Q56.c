#include <stdio.h>
/*Q56: Read and print elements of a one-dimensional array.*/
  int main(){ int b = 1 , d , e = 0 , a , i = 0;
              printf("enter the length you want the array to be off in a\n");
              scanf("%d" , &a);
              int c[a];
              while (b <= a && i < a)
              { printf("Enter the next value you want in c[%d]" , a );
                scanf("%d" , &c[i]);
                b += 1;
                i += 1;
              }
              while (e < a && e >= 0)
              { printf("%d" , c[e]);
                printf(" ");
                e += 1;
             }
                return 0;
}
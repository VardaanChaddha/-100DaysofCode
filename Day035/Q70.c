#include <stdio.h>
/*Q70: Rotate an array to the right by k positions.*/
int main(){ int a , b , d = 0 , e = 0 , f = 0 , g , h = 0 , i = 0 , j = 0 , n = 0 , l =0 , m =0;
            printf("Enter the length you want your array to be off\n");
            scanf("%d" , &a);
            int c[a] , k[a];
            while (d < a)
            {
             printf("Enter the next element you want in your array c[%d]\n" , d);
             scanf("%d" , &c[d]);
             d += 1;
            }
            while (e < a && f < a)
            { 
             k[e] = c[f];
             e += 1;
             f += 1;
            }
            printf("Enter the element from where you want to reverse the array\n");
            scanf("%d" , &g);
            while (h < a)
            {if (h == g)
                {j = h;
                while (j < a)
                {c[i] = k[j];
                 j += 1;
                 i += 1;
                }
               }
             h += 1;
            } 
            n = i;
            while (n < a)
            {
             c[n] = k[l];
             l += 1;
             n += 1;
            }
            while (m < a)
            {
             printf("%d" , c[m]);
             printf(" ");
             m += 1;
            }
            return 0;
        }
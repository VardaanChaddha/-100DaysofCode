#include <stdio.h>
/*Q63: Merge two arrays. */
 int main(){ int a , b , d = 0 , e = 0 , g = 0 , h = 0;
             printf("Enter the length you want your array to be off\n");
             scanf("%d" , &a);
             int c[a];
             while(d < a)
             {
               printf("Enter the next value you wnat in your array c[%d]\n" , d);
               scanf("%d" , &c[d]);
               d += 1;
            }
             printf("Enter the length you want your next array to be off\n");
             scanf("%d" , &b);
             int f[b];
             while(e < b)
             {
               printf("Enter the next value you want in your array f[%d]\n" , e);
               scanf("%d" , &f[e]);
               e += 1;
            }
             while(g < a)   
             {
               printf("%d" , c[g]);
               printf(" ");
               g += 1;
             }         
             while(h < b)
             {
               printf("%d" , f[h]);
               printf(" ");
               h += 1;
             }
             return 0;


 }
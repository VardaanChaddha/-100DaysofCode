#include <stdio.h>
/*Reverse an array without taking extra space*/
 int main(){ int a , b , d = 0;
             printf("Enter the length you want your array to be off\n");
             scanf("%d" , &a);
             int c[a];
             b = a - 1;
             while(d < a)
             {
               printf("Enter the next value you want in your array c[%d]\n" , d);
               scanf("%d" , &c[d]);
               d +=  1;
            }
             while (b >= 0)
             {
               printf("%d" , c[b]);
               printf(" ");
               b -= 1;
            }
            return 0;
 }
#include <stdio.h>
/*Search for an element in an array using linear search*/
 int main(){ int a , b = 0 , d = 0 , count = 0 , e;
             printf("Enter the length you want your array to be off\n");
             scanf("%d" , &a);
             int c[a];
             while (d < a)
             {
               printf("Enter the next value you want to be stored in your array c[%d]\n" , d);
               scanf("%d" , &c[d]);
               d += 1;
            }
              printf("Enter the value which you want you search in your array\n");
              scanf("%d" , &e);
              while (b < a && count <= 0)
               {if (c[b] == e)
               {
                printf("The index at which the value is present is %d" , b);
                count += 1;
               }
               b += 1;}
               if (count == 0)
               {printf("There is no such value present in the array\n");
                printf("PLEASE RECHECK\n");
                printf("-1");}
             
             return 0;
 }
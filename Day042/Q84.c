#include <stdio.h>
/*Q84: Convert a lowercase string to uppercase without using built-in functions.*/
   int main(){ char a[10000] , b[10000];
               int count = 0;
               printf("Enter the character you want to convert into uppercase letter from lowercase letter\n");
               fgets(a, 10000, stdin);
               while(a[count] != '\0')
               {
               if (a[count] != 32)
                {if (a[count] >= 97 && a[count] <= 122)
               {
                 b[count] = a[count] - 32;
               }
              }
               if (a[count] == 32)
               {
                b[count] = a[count];
               }
               count += 1;
            }
            b[count] = '\0';
            printf("%s" , b);
            return 0;
   }
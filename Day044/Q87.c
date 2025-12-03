#include <stdio.h>
#include <string.h>
/*Q87: Count spaces, digits, and special characters in a string.*/
   int main(){ char a[10000];
               int spaces = 0, digits = 0, special_char = 0 , count = 0;
               printf("Enter any  character which you want ot enter\n");
               fgets(a, 1000, stdin);
               a[strcspn(a, "\n")] = '\0';
               while(a[count] != '\0')
               {
                if (a[count] >= 33 && a[count] <= 47 || a[count] >= 58 && a[count] <= 64 || a[count] >= 91 && a[count] <= 96 || a[count] >= 123 && a[count] <= 126)
                {
                  special_char += 1;
                }
                if (a[count] == 32)
                {
                  spaces += 1;
                }
                if (a[count] >= 48 && a[count] <= 57)
                {
                  digits += 1;
                }
                count += 1;
               }
               printf("The number of spaces , digits and special_char are %d , %d and %d" , spaces , digits , special_char);
               return 0;
    
   }
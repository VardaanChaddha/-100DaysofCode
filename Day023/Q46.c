#include <stdio.h>
//Q46: Write a program to print the following pattern:
   int main(){ int i = 1;
               while (i <= 25)
               {printf("*");
                if (i % 5 == 0)
                printf("\n");                                  
                i += 1;}
               return 0;
   }
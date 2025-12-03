#include <stdio.h>
/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345*/
 int main(){ int g = 5 , h;
             h = g;
             for (int i = 5; i > 0; i--)
                {while (h <= 5)
                 { printf("%d" , h);
                   h += 1;}
                 g -= 1;
                 h = g;
                 printf("\n");}
             return 0;
 }
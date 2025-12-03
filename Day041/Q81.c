#include <stdio.h>
/*Q81: Count characters in a string without using built-in length functions.*/
 int main(){ char input[10000];
             int count = 0;
             printf("Enter the character you want ot enter in the string\n");
             fgets(input , 10000, stdin);
             while (input[count] != '\0')
             {
               count += 1;
             }
             printf("%d" , count);
             return 0;
 }
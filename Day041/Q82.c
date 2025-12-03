#include <stdio.h>
/*Q82: Print each character of a string on a new line.*/
 int main(){ char input[10000];
             int count = 0;
             printf("Enter the character you want to enter in the string\n");
             fgets(input, 10000, stdin);
             while(input[count] != '\0')
             {
                printf("%c" , input[count]);
                printf("\n");
                count += 1;

             }
            return 0;
            }
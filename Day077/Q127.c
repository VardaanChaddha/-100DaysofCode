#include <stdio.h>
/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/
int main()
{
    char a[1000], b[1000];
    int c = 0;
    FILE *fp = fopen("input.txt", "r");
    FILE *gp = fopen("output.txt", "w");
    if (fp == NULL)
    {
        printf("There exists no such file\n");
    }
    while ((fgets(a, sizeof(a), fp)) != NULL)
      {  
        c = 0;
        while (a[c] != '\0')
        { 
            if (a[c] >= 97 && a[c] <= 122)
            {
                a[c] -= 32;
            }
            c += 1;
        }
    }
    fputs(a, gp);
    printf("%s", a);
    fclose(fp);
    fclose(gp);
    printf("\nBoth file closed successfully\n");
    return 0;
}
#include <stdio.h>
/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
*/
int main()
{
    char a[1000];
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("There is some problem in opening the file\n");
    }
    else
    {
        while ((fgets(a, sizeof(a), fp)) != '\0')

        {
            printf("%s", a);
        }
    }
    return 0;
}
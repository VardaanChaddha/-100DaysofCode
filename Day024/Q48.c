#include <stdio.h>
/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345*/
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int h = 1; h <= i; h++)
        {
            printf("%d" , h);
        }
        printf("\n");
    }
    return 0;
}
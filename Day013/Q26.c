// Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number greater than 1:     ");
    scanf(" %d", &n);

    if (n > 1)
    {
        printf("Numbers from %d to 1 are: ", n);
        
        while (n >= 1)
        {
            printf(" %d ", n);
            n = n - 1;
        }
    }
    else
    {
        printf("wrong input");
    }

    return 0;
}
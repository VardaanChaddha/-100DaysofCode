// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main()
{

    char ch;
    printf("Enter a character of any kind:   ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("It is an upper case alphabet");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("It is a lower case alphabet");
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a digit");
    }

    else
    {
        printf("It is a special character");
    }

    return 0;
}
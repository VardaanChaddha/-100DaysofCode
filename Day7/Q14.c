//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main()
{

    char ch;
    printf("Enter the alphabet:     ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The alphabet is a Vowel");
    }
    else
        printf("The alphabet is a Consonant");

    return 0;
}
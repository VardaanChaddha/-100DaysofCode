#include <stdio.h>
#include <string.h>
/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
    int main()
    {
        char a[1000], b[1000];
        int c = 0, d = 0, result = 0, e = 0;
        printf("Enter the character which you want to enter\n");
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = '\0';
        printf("Now The enter the character which you want to check whether it is anagram or not\n");
        fgets(b, sizeof(b), stdin);
        b[strcspn(b, "\n")] = '\0';
        c = strlen(a);
        while (a[d] != '\0')
        {
            while (b[e] != '\0')
            {
                if (a[d] == b[e])
                {
                    result += 1;
                    break;
                }
                e += 1;
            }
            e = 0;
            d += 1;
        }
        if (result == c)
        {
            printf("Anagram");
        }
        else
        {
            printf("Not Anagram");
        }
        return 0;
    }
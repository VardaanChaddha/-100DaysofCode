#include <stdio.h>
#include <string.h>
/*/Q93: Check if two strings are anagrams of each other.*/
int main()
{
    char a[1000], b[1000];
    int count = 0, result = 0, ans = 0, d = 0, i = 0;
    printf("Enter the first character you want to enter\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Enter the second character you want to enter\n");
    fgets(b, 1000, stdin);
    b[strcspn(b, "\n")] = '\0';
    while (a[count] != '\0')
    {
        count += 1;
        d += 1;
    }
    count = 0;
    while (b[count] != '\0')
    {
        count += 1;
        i += 1;
    }
    count = 0;
    if (d == i)
    {
        while (a[count] != '\0')
        {
            while (b[result] != '\0')
            {
                if (a[count] == b[result])
                {
                    ans += 1;
                    break;
                }
                result += 1;
            }
            if (ans == d)
            {
                break;
            }
            result = 0;
            count += 1;
        }
        if (ans == d)
        {
            printf("The characters entered by you are anagram");
        }
        else
            printf("NO! The characters entered by you are not anagram");
    }
    else
        printf("NO! The characters entered by you are not anagram");
    return 0;
}
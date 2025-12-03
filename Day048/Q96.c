#include <stdio.h>
#include <string.h>
/* Q96: Reverse each word in a sentence without changing the word order. */
int main()
{
    char a[1000], b[1000];
    int count = 0, c = 0, len = 0, check = 0, result = 0, ans = 0;

    printf("Enter the character you want to enter in your string\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';

    while (a[count] != '\0')
    {

        if (a[count] != 32)
        {
            len += 1;
        }

        if (a[count] == 32 || a[count + 1] == '\0')
        {

            if (a[count + 1] == '\0' && a[count] != 32)
                len += 1;
            check = len - ans;
            result = count - 1;

            if (a[count + 1] == '\0' && a[count] != 32)
                result = count;
            for (int i = 0; i < check; i++)
            {
                b[c++] = a[result - i];
            }
            if (a[count] == 32)
            {
                b[c++] = 32;
            }
             ans = len;
        }
         count += 1;
    }
     b[c] = '\0';
    printf("%s", b);
    return 0;
}
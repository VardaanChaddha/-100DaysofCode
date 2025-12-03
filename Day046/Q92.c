#include <stdio.h>
#include <string.h>
/*Q92: Find the first repeating lowercase alphabet in a string.*/
int main()
{
    char a[1000], b[1000], ans;
    int count = 0, result = 0, final = 0, checker = 0;
    printf("Enter the character which you want to enter\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';
    while (a[count] != '\0')
    {
        if (a[count] >= 65 && a[count] <= 90)
        {
            a[count] += 32;
        }
        count += 1;
    }
    printf("The character entered by you in lowercase letter is %s\n\n", a);
    count = 0;
    while (a[count] != '\0')
    {
        b[result] = a[count];
        count += 1;
        result += 1;
    }
    b[result] = '\0';
    count = 0;
    result = 0;
    while (a[count] != '\0' && result <= 2)
    {
        while (b[final] != '\0' && result <= 2)
        {
            if (a[count] == b[final])
            {
                result += 1;
                if (result == 2)
                {
                    ans = a[count];
                    checker = result;
                    break;
                }
            }
            final += 1;
        }
        if (checker == 2)
        {
            break;
        }
        result = 0;
        final = 0;
        count += 1;
    }
    if (checker == 2)
    {
        printf("The first repeating lowercase letter is %c", ans);
    }
    if (checker != 2)
    {
        printf("The character which you entered has no repeating characters");
    }
    return 0;
}
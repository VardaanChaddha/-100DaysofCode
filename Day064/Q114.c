#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int b = 0, c = 0, d = 0, count = 0, result = 0, maximum = 0, test = 0, length = 0;

    printf("Enter the string which you want to enter\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';
    length = strlen(a);
    while (test < length)
    {
        result = test;
        count = 0;

        while (result < length)
        {
            int repeated = 0;
            for (c = test; c < result; c += 1)
            {
                if (a[c] == a[result])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated)
                break;
            count += 1;
            result += 1;
        }

        if (count > maximum)
            maximum = count;

        test += 1;
    }

    printf("The length of the longest substring is %d\n", maximum);
    return 0;
}
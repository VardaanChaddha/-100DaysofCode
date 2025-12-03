#include <stdio.h>
#include <string.h>
/* Q100: Print all sub-strings of a string. */
int main()
{
    char a[1000], b[1000];
    int count = 0, put = 0, e = 0, check = 0, c = 0, d = 0;

    printf("Enter the character which you want to enter\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';

    e = strlen(a) - 1;

    while (check <= e)
    {
        b[put] = a[d];
        put++;
        if (d >= count)
        {
            b[put] = '\0';
            printf("%s\n", &b[put - (d - count + 1)]);
        }
        d++;
        if (d > e)
        {
            check++;
            count++;
            d = count;
        }

        if (count > e)
            break;
    }

    return 0;
}
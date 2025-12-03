#include <stdio.h>
#include <string.h>
/*Q98: Print initials of a name with the surname displayed in full.*/
int main()
{
    char a[1000], b[1000];
    int count = 0, len = 0, ans = 0, space = 0, check = 0;
    printf("Enter the name of the person you want to enter\n");
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';
    len = strlen(a);
    while (a[count] != '\0')
    {
        if (a[count] == 32 && a[count + 1] >= 97 && a[count + 1] <= 122 || a[count] == 32 && a[count + 1] >= 65 && a[count + 1] <= 90)
        {
            space += 1;
        }
        count += 1;
    }
    count = 0;
    b[ans] = a[count];
    ans += 1;
    b[ans] = '.';
    ans += 1;
    while (a[count] != '\0')
    {
        if (a[count] == 32 && a[count + 1] >= 97 && a[count + 1] <= 122 || a[count] == 32 && a[count + 1] >= 65 && a[count + 1] <= 90)
        {
            check += 1;
        }
        if (a[count] == 32 && check < space)
        {
            b[ans] = a[count + 1];
            ans += 1;
            b[ans] = '.';
            ans += 1;
        }
        if (check == space)
        {
            count += 1;
            while (a[count] != '\0')
            {
                b[ans] = a[count];
                ans += 1;
                count += 1;
            }
        }
        count += 1;
    }
    b[ans] = '\0';
    printf("%s", b);
}
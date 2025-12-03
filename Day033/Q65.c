#include <stdio.h>
/*Q65: Search in a sorted array using binary search. */
int main()
{
    int a, b, d = 0, e = 0, g = 0, x = 0, y = 0, s, z, f = 0, w = 0, k = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a], r[a];
    while (d < a)
    {
        printf("Enter the next value you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }

    while (k < a)
    {
        r[w] = c[k];
        k += 1;
        w += 1;
    }

    s = a - 1;
    z = s;

    printf("Enter the number which you want to search in the array\n");
    scanf("%d", &b);

    if (r[0] > r[s])
    {
        int temp[a];
        for (int i = 0; i < a; i++)
        {
            temp[i] = c[s - i];
        }
        for (int i = 0; i < a; i++)
        {
            c[i] = temp[i];
        }
    }

    if (a % 2 == 0)
    {
        e = (a / 2);
        g = e;

        if (c[e] == b)
        {
            if (r[0] > r[s])
            {
                printf("The value %d which you are searching for is at the index %d", b, a - 1 - e);
            }
            else
            {
                printf("The value %d which you are searching for is at the index %d", b, e);
            }
        }
        else if (c[e] < b)
        {
            while (e < a && c[e] != b)
            {
                e += 1;
            }
            if (e < a)
            {
                if (r[0] > r[s])
                    printf("The value %d which you are searching for is at the index %d", b, a - 1 - e);
                else
                    printf("The value %d which you are searching for is at the index %d", b, e);
            }
            else
                printf("The value %d was not found in the array", b);
        }
        else if (c[g] > b)
        {
            while (g >= 0 && c[g] != b)
            {
                g -= 1;
            }
            if (g >= 0)
            {
                if (r[0] > r[s])
                    printf("The value %d which you are searching for is at the index %d", b, a - 1 - g);
                else
                    printf("The value %d which you are searching for is at the index %d", b, g);
            }
            else
                printf("The value %d was not found in the array", b);
        }
    }

    if (a % 2 != 0)
    {
        e = (a / 2);
        g = e;

        if (c[e] == b)
        {
            if (r[0] > r[s])
            {
                printf("The value %d which you are searching for is at the index %d", b, a - 1 - e);
            }
            else
            {
                printf("The value %d which you are searching for is at the index %d", b, e);
            }
        }
        else if (c[e] < b)
        {
            while (e < a && c[e] != b)
            {
                e += 1;
            }
            if (e < a)
            {
                if (r[0] > r[s])
                    printf("The value %d which you are searching for is at the index %d", b, a - 1 - e);
                else
                    printf("The value %d which you are searching for is at the index %d", b, e);
            }
            else
                printf("The value %d was not found in the array", b);
        }
        else if (c[g] > b)
        {
            while (g >= 0 && c[g] != b)
            {
                g -= 1;
            }
            if (g >= 0)
            {
                if (r[0] > r[s])
                    printf("The value %d which you are searching for is at the index %d", b, a - 1 - g);
                else
                    printf("The value %d which you are searching for is at the index %d", b, g);
            }
            else
                printf("The value %d was not found in the array", b);
        }
    }
    return 0;
}
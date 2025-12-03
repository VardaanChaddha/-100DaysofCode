#include <stdio.h>
/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

int main()
{
    int a, b = 0, d = 0, sum = 0, e = 0, f = 0, total = 0, ans = 0, count = 0, g = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a];
    while (d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    d = 0;
    b = a - 1;
    ans = c[0];
    while (d < a)
    {
        if (c[d] <= -1)
        {
            count += 1;
        }
        if (count == a)
        {
            while (g < a)
            {
                if (c[g] > ans)
                {
                    ans = c[g];
                }
                g += 1;
            }
        }
        d += 1;
    }
    if (count == a)
    {
        printf("%d", ans);
        return 0;
    }
    else
        count = 0;
    while (e <= b)
    {
        sum += c[e];

        if (sum > ans)
            ans = sum;
            e += 1;

        if (e > b && f < b)
        {
            f += 1;
            e = f;
            sum = 0;
        }
    }

    printf("\nOUTPUT IS %d", ans);
    return 0;
}
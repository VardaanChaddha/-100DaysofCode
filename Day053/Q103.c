#include <stdio.h>
/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0*/
int main()
{
    int a, b = 0, d = 0, e = 0, sum = 0, f = 0, total = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a];
    while (d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    f = e + 1;
    while (e < a)
    {
        while (b <= e && b >= 0)
        {
            if (e == 0)
            {
                sum += 0;
            }
            if (e != 0 && e != b)
            {
                sum += c[b];
            }
            b += 1;
        }
        while (f > e && f <= a - 1)
        {
            if (e == a - 1)
            {
                total += 0;
            }
            if (e != a - 1)
            {
                total += c[f];
            }
            f += 1;
        }
        if (sum == total)
        {
            printf("The pivot index of this array is %d", e);
            break;
        }
        if (e == a - 1 && sum != total)
        {
            printf("-1");
        }

        e += 1;
        b = 0;
        f = e + 1;
        sum = 0;
        total = 0;
    }
    return 0;
}
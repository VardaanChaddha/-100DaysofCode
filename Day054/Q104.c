#include <stdio.h>
/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6
Input 2:
n = 1
Output 2:
1
Input 3:
n = 4
Output 3:
-1
*/
int main()
{
    int a, b = 1, d = 1, e = 1, sum = 0, total = 0;
    printf("Enter the number you want to enter\n");
    scanf("%d", &a);
    while (e <= a)
    {
        b = 1;
        while (b < e && b >= 0)
        {
            sum += b;
            b += 1;
        }
        d = e + 1;
        while (d > e && d <= a)
        {
            total += d;
            d += 1;
        }
        if (sum == total)
        {
            printf("The pivot of the value entered by you is %d", e);
            break;
        }
        sum = 0;
        total = 0;
        e += 1;
    }
    if (sum == 0 && total == 0)
    {
        printf("-1");
    }
    return 0;
}
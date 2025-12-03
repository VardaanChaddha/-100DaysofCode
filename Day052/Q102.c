#include <stdio.h>
/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
int main()
{
    int a, b = 0, d = 0, mid, x, e = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a];
    e = a - 1;
    while (d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    printf("Enter the  element which you want to search in your array\n");
    scanf("%d", &x);
    if (c[0] < c[e])
    {
        if (x > c[e] || x < c[0])
        {
            printf("-1");
        }
        while (b <= e)
        {
            mid = (e + b) / 2;
            if (c[mid] == x)
            {
                printf("The ceil of the element entered by you is present at %d", mid);
                break;
            }
            if (c[mid] < x && c[mid - 1] > x && mid >= 0)
            {
                printf("The ceil of the element entered by you is present at %d", mid);
                break;
            }
            if (c[mid] > x && mid >= 0 && mid <= e)
            {
                e = mid - 1;
            }
            if (c[mid] < x && mid >= 0 && mid <= e)
            {
                b = mid + 1;
            }
        }
    }
    if (c[0] > c[e])
    {   
        if (x < c[e] || x > c[0])
        {
            printf("-1");
        }
        while (b <= e)
        {
            mid = (e + b) / 2;
            if (c[mid] == x)
            {
                printf("The ceil of the element entered by you is present at %d", mid);
                break;
            }
            if (c[mid] > x && c[mid + 1] < x && mid >= 0)
            {
                printf("The ceil of the element entered by you is present at %d", mid);
                break;
            }
            if (c[mid] < x && mid >= 0 && mid <= e)
            {
                e = mid - 1;
            }
            if (c[mid] > x && mid >= 0 && mid <= e)
            {
                b = mid + 1;
            }
        }
    }
    return 0;
}
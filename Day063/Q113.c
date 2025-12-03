#include <stdio.h>
/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] =  [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
*/
int main()
{
    int a, b = 0, d = 0, check = 0, e = 0, f = 0, ans = 0, value = 0, count = 0, g = 0, real = 0;
    printf("Enter the length you want your array to be off \n");
    scanf("%d", &a);
    int c[a];
    while (d < a)
    {
        printf("Enter th next element you want to enter in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    printf("Enter the number of element which you want to check in your array\n");
    scanf("%d", &b);
    check = c[0];
    ans = c[0];
    while (e < a)
    {
        if (c[e] > check)
        {
            check = c[e];
        }
        e += 1;
    }
    while (f < a && count < b)
    {
        if (g == 1)
        {
            f = 0;
        }
        g = 0;
        if (c[f] < ans)
        {
            ans = c[f];
            real = ans;
            value = f;
        }
        if (f == a - 1)
        {  
            f = value;
            c[f] = check;
            ans = check;
            count += 1;
            f = 0;
            g += 1;
        }
        f += 1;
    }
    printf("\n%d", real);
}
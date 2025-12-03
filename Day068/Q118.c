#include <stdio.h>
/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/
int main()
{
    int a, b = 0, d = 0 , largest = 0 , total = 0 , sum = 0 , ans = 0;
    printf("Enter the length you want to enter for your array \n");
    scanf("%d", &a);
    int c[a];
    while (d < a)
    {
        printf("Enter the next element you want to enter in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    } 
    while (b < d)
    {
        if(c[b] > largest)
        {
            largest = c[b];
        }
        b += 1;
    }
    total = largest*(largest + 1) / 2;
    b = 0;
    while(b < d)
    {
      sum += c[b];
      b += 1;
    }
    ans = total - sum;
    printf("\n%d" , ans);
    return 0;
}
    
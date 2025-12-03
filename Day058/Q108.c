#include <stdio.h>
/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
int main()
{
    int a, b = 0, d = 0 , product = 1;
    printf("Enter the length you want to enter\n");
    scanf("%d", &a);
    int c[a], g[a];
    while (d < a)
    {
        printf("Enter the next element you want to enter in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    d = 0;
    while(d < a)
    {
        g[d] = product;
        d += 1;
    }
    d = 0;
    while(b < a)
    {
        while(d < a)
        {
          if(c[b] == c[d])
          {
            goto start;
          }
          g[b] *= c[d];
          start:
          d += 1; 
        }
        d = 0;
        b += 1;
    }
    b = 0;
    while(b < a)
    {
        printf("%d" , g[b]);
        if(b != a - 1)
        {
            printf(",");
        }
        b += 1;
    }

}
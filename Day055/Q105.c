#include <stdio.h>
/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
int main(){
    int a = 0 , b = 0 , d = 0 , count = 0 , e = 0 , ans = 0;
    printf("Enter the length you want your array to be off\n");
    scanf("%d" , &a);
    int c[a];
    while(d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n" , d + 1);
        scanf("%d" , &c[d]);
        d += 1;
    }
    while(b < a)
    {
        count += 1;
        b += 1;
    }
    e = count / 2;
    b = 0;
    d = 0;
    count = 0;
    while(b < a)
    {
        while(d < a)
        {  
           if(c[b] == c[d])
           {
             count += 1;
           }
           if(count > e)
           {
             ans = c[b];
           }
           d += 1;
         }
         b += 1;
         count = 0;
         d = 0;
    }
    if(ans == 0)
    {
        ans = -1;
    }
    printf("\n%d" , ans);
    return 0;
}
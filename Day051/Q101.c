#include <stdio.h>
/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
int main()
{
    int a, b = 0, d = 0, e, f = 0, g, ans;
    printf("PLEASE MAKE SURE THE ELEMENTS WHICH YOU ARE ENTERING IS EITHER IN ASCENDING OR DESCENDING ORDER\n\n");
    printf("Enter the length you want your array to be off\n");
    scanf("%d", &a);
    int c[a];

    while (d < a)
    {
        printf("Enter the next element you want in your array c[%d]\n", d);
        scanf("%d", &c[d]);
        d += 1;
    }
    printf("Enter the element which you want to find in the array\n");
    scanf("%d", &g);
    if (g >= c[a - 1] || g <= c[0])
    {
        printf("-1 ,-1");
    }
        while (b < a)
        {
            f = (a + b) / 2;
            if (c[f] == g)
            {
                if (c[f + 1] == g)
                {
                    printf("the value which you entered is present at %d and %d", f, f + 1);
                    break;
                }
                if (c[f - 1] == g)
                {
                    printf("The value which you entered is present at %d and %d", f - 1, f);
                    break;
                }
            }
            if (c[f] > g && f + 1 < a)
            {
                a = f - 1;
            }
            if (c[f] < g && f - 1 >= 0)
            {
                b = f + 1;
            }
        }
    
    return 0;
}
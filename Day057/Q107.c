#include <stdio.h>
/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
int main(){ int a , b = 0 , d = 0 , e = 0 , h = 0 , i = 0;
            printf("Enter the length you want in your array\n");
            scanf("%d" , &a);
            int c[a] , g[a];
            while (d < a)
            {
                printf("Enter the next element you want to enter in your array c[%d]\n" , d);
                scanf("%d" , &c[d]);
                d += 1;
            }
            while (b < a)
            {
                if (b == 0)
                {
                   g[b] = -1;
                }
                while(e < b)
                {
                    if (c[b] < c[e])
                    {
                        g[b] = c[e];
                        i += 1;
                    }
                    if (i < 1 && e == b - 1)
                    {
                        g[b] = -1;
                    }

                    e += 1;
                }
                e = 0;
                i = 0;
                b += 1;
            }
            while (h < a)
            {
                printf("%d" , g[h]);
                printf(",");
                printf(" ");
                h += 1;
            }
            return  0;
        }
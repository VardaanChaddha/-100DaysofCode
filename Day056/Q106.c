#include <stdio.h>
/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.


Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
int main(){ 
            int a , d = 0 , e = 0 , f = 0 , h = 0;
            printf("Enter the length you want in your element\n");
            scanf("%d" , &a);
            int c[a] , g[a];
            while (d < a)
            {
                printf("Enter the next element you want to enter in your array c[%d]\n" , d);
                scanf("%d" , &c[d]);
                d += 1;
            }
            while (e < a)
            {  
                f = e + 1;
                if (e == a - 1)
                {
                    g[e] = -1;
                }
                while (f < a)
                {
                    if(c[e] < c[f])
                    {
                        g[e] = c[f];
                        break;
                    }
                    if (f == a - 1)
                    {
                       g[e] = -1;
                       break;
                    }
                    f += 1;
                }
                e += 1;
            }
            while(h < a)
            {
                printf("%d" , g[h]);
                printf(",");
                printf(" ");
                h += 1;
            }
            return 0;






}
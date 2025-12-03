#include <stdio.h>
/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/
int main(){
            int a , b = 0 , d = 0, check = 0 , f = 0 , length = 0 , ans = 0 , g = 0 , sum = 0;
            printf("\n\nMAKE SURE BOTH THE ARRAY WHICH YOU ARE ENTERING ARE SORTED ARRAYS\n\n");
            printf("Enter the length you want to enter for your your first array\n");
            scanf("%d", &a);
            int c[a];
            while(d < a)
            {
                printf("Enter the next element which you want to enter in your sorted array c[%d]", d);
                scanf("%d", &c[d]);
                d += 1;
            }
            printf("Enter the length you want to enter for your next sorted array \n");
            scanf("%d", &b);
            int e[b];
            sum = a + b;
            int len[sum];
            while(f < b)
            {
                printf("Enter the next element you want to enter in your array c[%d]\n", f);
                scanf("%d" , &e[f]);
                f += 1;
            }
            while(check < a)
            {
               len[check] = c[check];
               check += 1;
            }
             while(length < b)
             {
                len[check] = e[length];
                length += 1;
                check += 1;
             }
             a = 0;
             b = 0;
             while(a < check)
             {
                while(b < check)
                {
                    if (len[a] < len[b])
                    {
                        c[ans] = len[a];
                        ans += 1;
                    }
                    b += 1;
                }
                b = 0;
                a += 1;
             }
             while(g < ans)
             {
                printf("%d", c[g]);
                printf(" ");
                g += 1;
             }
             return 0;
}
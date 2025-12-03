#include <stdio.h>
/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1
*/
int main(){
            int a , b = 0 , d = 0 , e = 0 , f = 0 , sum = 0;
            printf("Enter the length you want to enter for your array\n");
            scanf("%d", &a);
            int c[a];
            while(d < a)
            {
                printf("Ente the next leement you want to enter in your array c[%d]\n", d);
                scanf("%d", &c[d]);
                d += 1;
            }
            printf("Enter the sum which you want to check");
            scanf("%d", &b);
            while (e < a)
            {
              while (f < a)
              {
                f += 1;
                sum = c[e] + c[f];
                if (sum == b)
                {
                    printf("%d", e);
                    printf(", ");
                    printf("%d", f);
                    break;
                }
              }
              if (sum == b)
              {
                break;
              }
              f = 0;
              e += 1;
              sum = 0;
            }
            if (sum != b)
            {
                printf("-1");
                printf(", ");
                printf("-1");
            }
            return 0;
}
#include <stdio.h>
/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/
int main(){
             int a , b = 0 , d = 0;
             printf("Enter the length which you want to neter for your array\n");
             scanf("%d", &a);
             int c[d];
             while(d < a)
             {
                printf("Enter the next element which you want to enter in your array c[%d]\n", d);
                scanf("%d", &c[d]);
                d += 1;
             }
             while(b < a)
             {
                if(c[b] == c[b+1])
                {
                    printf("\nThe output is %d", c[b]);
                    break;
                }
                b += 1;
             }
             return 0;

}
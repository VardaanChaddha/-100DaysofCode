#include <stdio.h>
/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
int main(){
            int a , b , d = 0 , e = 0 , f = 0 , sum = 0 , k = 0 , g = 0;
            printf("Enter the lenght you want the array to be off\n");
            scanf("%d" , &a);
            int c[a];
            while(d < a)
            {
                printf("Enter the next element you want to enter in your arrray c[%d]\n", d);
                scanf("%d" , &c[d]);
                d += 1;
            }
            printf("Enter the limit you want to set for the sub arrays\n");
            scanf("%d" , &b);
            e = b;
            while (e <= a)
            {
                while (f < e)
                {
                   sum += c[f];
                   f += 1;
                }
                if (sum > k)
                {
                    k = sum;
                }
                sum = 0;
                g += 1;
                f = g;
                e += 1;
            }
            printf("The maximum sum of all the sub arrays of size %d is %d" , b , k);
            return 0;
}
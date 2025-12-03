#include <stdio.h>
/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
int main(){
             int a , b = 0 , d = 0 , e = 0 , f = 0 , max = 0;
             printf("ENter the length you want you r array to be off\n");
             scanf("%d" , &a);
             int c[a];
             while (d < a)
             {
                printf("Enter the next element you want in your array c[%d]\n" , d);
                scanf("%d" , &c[d]);
                d += 1;
             }
             printf("Enter the length you want the sub arrays to be off\n");
             scanf("%d" , &b);
             e = b - 1;
             while(e < a)
             {
              while(f <= e)
              {
                if(c[f] > max)
                {
                  max = c[f];
                }
                if(f == e)
                {
                  printf("%d" , max);
                  printf(" ");
                }
                f += 1;
              }
              e += 1;
              f = e - (b - 1);
              max = 0;
             }
             return 0;

             
}
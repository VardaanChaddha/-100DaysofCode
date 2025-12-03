#include <stdio.h>
/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
int main()
{
  int a, b = 0, d = 0, e = 0, f = 0, g = 0 , count = 0;
  printf("Enter the length you want in your array\n");
  scanf("%d", &a);
  int c[a], k[a];
  while (d < a)
  {
    printf("Enter the next element you want in your array c[%d]\n", d);
    scanf("%d", &c[d]);
    d += 1;
  }
  printf("Enter the length you want your sub array to be off\n");
  scanf("%d", &b);
  e = b - 1;
  while (e < a)
  {
    while (f <= e)
    {
      if (c[f] < 0 && count == 0)
      {
        printf("%d", c[f]);
        printf(" ");
        count += 1;
      }
      f += 1;
    }
    if (count == 0)
    {
      printf("0");
      printf(" ");
    }
    e += 1;
    f = e - (b - 1);
    count = 0;
  }
  return 0;
}
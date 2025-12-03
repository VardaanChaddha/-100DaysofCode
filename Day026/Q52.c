#include <stdio.h>
/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
int main()
{
  int count = 1, k = 3;
  for (int i = 1; i <= 5; i++)
  {
    for (int h = 1; i % 2 != 0 && h <= i; h++)
    {
      printf("*");
      printf("\n");
    }
    if (count != 1 && count != 3)
      printf("\n");
    count += 1;
  }
  if (count >= 5)
  {
    for (int g = 1; g <= k && k >= 0; g++)
    {
      printf("*");
      printf("\n");
    }
    if (k == 3)
      printf("\n");
  } printf("*");

  return 0;
}
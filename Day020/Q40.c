#include <stdio.h>
/*Q40: Write a program to find the 1’s complement of a binary number and print it.*/
int main()
{
  int binary, real = 0, value = 0, digit = 0, g = 0, h, place = 1;
  printf("enter the value of your binary\n");
  scanf("%d", &binary);
  h = binary;
  while (h > 0)
  {
    h /= 10;
    real += 1;
  }
  h = binary;
  while (binary > 0)
  {
    value = binary % 10;
    if (value == 0)
      value = 1;
    else
      value = 0;
    digit = digit + (value * place);
    place *= 10;
    binary /= 10;
  }
  printf("%0*d\n", real, digit);
  return 0;
}
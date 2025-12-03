#include <stdio.h>
#include <math.h>
/*Write a pogram to check if a number is an armstrong number*/
int main()
{
   int num, count = 0, result, total = 0, original;
   double sum;
   printf("enter the value of number\n");
   scanf("%d", &num);
   original = num;
   if (num > 0)
   {
      while (num > 0)
      {
         num /= 10;
         count++;
      }
      num = original;
      while (num > 0)
      {
         result = num % 10;
         sum = (double)(pow(result, count));
         total += sum;
         num /= 10;
      }
   }
   if (total == original)
      printf("your number is an armstrong number");
   else
      printf("your number is not an armstrong number");
   return 0;
}
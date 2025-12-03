#include <stdio.h>
/*Q32: Write a program to check if a number is a palindrome.*/
int main()
{
   int ori, rev = 0, num, digit;
   printf("enter the value of number\n");
   scanf("%d", &num);
    ori = num;
    while (num > 0)
      {
         digit = num % 10;
         rev = rev * 10 + digit;
         num /= 10;
      }
   if (ori == rev)
      printf("palindrome");
   else
      printf("not palindrom");
   return 0;
}
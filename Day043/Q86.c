#include <stdio.h>
#include <string.h>
/*Q86: Check if a string is a palindrome.*/
int main()
{
   char a[10000], b[10000];
   int count = 0, result, reverse = 0;
   printf("Enter the character which you want to check is palindrome or not\n");
   fgets(a, 10000, stdin);
   a[strcspn(a, "\n")] = '\0';
   while (a[count] != '\0')
   {
      count += 1;
   }
   result = count - 1;
   while (result >= 0)
   {
      b[reverse] = a[result];
      result -= 1;
      reverse += 1;
   }
   if (strcmp(a, b) == 0)
   {
      printf("The character which you entered is a palindrome");
   }

   else
      printf("The character which you entered is not a palindrome");
   return 0;
}
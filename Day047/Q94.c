#include <stdio.h>
#include <string.h>
/*Q94: Find the longest word in a sentence.*/
int main()
{
  char a[1000], b[1000];
  int count = 0, result = 0, counter = 0, ans = 0, space = 0, checker = 0, rig = 0;
  printf("Enter the character which you want to enter\n");
  fgets(a, 1000, stdin);
  a[strcspn(a, "\n")] = '\0';
  while (a[count] != '\0')
  {
    if (a[count] != 32)
    {
      result += 1;
    }
    if (a[count + 1] == '\0' && a[count] != 32)
    {
      count += 1;
    }
    if (a[count] == 32 || a[count] == '\0')
    {
      if (result > counter)
      {
        rig = 0;
        counter = result;
        checker = count - 1;
        while (ans <= checker && a[ans] != '\0')
        {
          b[rig] = a[ans];
          rig += 1;
          ans += 1;
        }
        ans = count + 1;
      }
      result = 0;
    }
    count += 1;
  }
  b[rig] = '\0';
  printf("The longest word in your code is %s", b);
  return 0;
}
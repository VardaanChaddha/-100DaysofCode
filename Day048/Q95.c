#include <stdio.h>
#include <string.h>
/*Q95: Check if one string is a rotation of another.*/
int main()
{
  char a[1000], b[1000] , result[1000];
  int count = 0, c = 0, d = 0;
  printf("Enter the chaaracter which you want to enter in your string\n");
  fgets(a, 1000, stdin);
  a[strcspn(a, "\n")] = '\0';
  printf("Enter the next character you wnat to enter in your string\n");
  fgets(b, 1000, stdin);
  b[strcspn(b, "\n")] = '\0';
  c = strlen(a);
  d = strlen(b);
  if (c == d)
  {
    strcpy(result, a);
    strcat(result, a);
    if (strstr(result, b) != NULL)
    {
      printf("ROTATION");
    }
  
  else
    printf("NOT ROTATION");
  }
  else   
    printf("NOT ROTATION");
    return 0;
}


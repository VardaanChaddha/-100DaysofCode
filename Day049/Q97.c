#include <stdio.h>
#include <string.h>
/*Q97: Print the initials of a name.*/
      int main(){ char a[1000] , b[1000];
                  int count = 0 , ans = 0;
                  printf("Enter the name of the person you want to enter\n");
                  fgets(a, 1000, stdin);
                  a[strcspn(a, "\n")] = '\0';
                  b[ans] = a[count];
                  ans += 1;
                  b[ans] = '.';
                  ans += 1;
                  while (a[count] != '\0')
                  {
                    if (a[count] == 32 && a[count + 1] >= 97 && a[count + 1] <= 122 || a[count] == 32 && a[count + 1] >= 65 && a[count + 1] <= 90)
                    {
                        b[ans] = a[count + 1];
                        ans += 1;
                        b[ans] = '.';
                        ans += 1;
                    } 
                    count += 1;
                  }
                  b[ans] = '\0';
                  printf("%s" , b);










      }
   
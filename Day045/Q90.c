#include <stdio.h>
#include <string.h>
/*Q90: Toggle case of each character in a string.*/
  int main(){ char a[1000];
              int count = 0;
              printf("Enter the character which you want to toggle \n");
              fgets(a, 1000, stdin);
              a[strcspn(a, "\n")] = '\0';
              while(a[count] != '\0')
              {
                if (a[count] >= 65 && a[count] <= 90)
                {
                    a[count] += 32;
                    count += 1;
                }
                if (a[count] >= 97 && a[count] <= 122)
                {
                    a[count] -= 32;
                    count += 1;
                }
                if (a[count] == 32)
                {
                    a[count] = 32;
                    count += 1;
                }
               }
              printf("%s" , a);
              return 0;

  }
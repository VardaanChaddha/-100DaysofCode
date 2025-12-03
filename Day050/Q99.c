#include <stdio.h>
#include <string.h>
/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
      int main(){ char a[1000] , b[1000] , c[200];
                  int count = 0 , put = 0;
                  printf("Enter the date and year in format of dd/04/yyyy\n");
                  fgets(a, 1000, stdin);
                  a[strcspn(a, "\n")] = '\0';
                  strcpy(b, "");
                  strcpy(c, "Apr");
                  while(a[count] != '\0')
                  {
                       if (a[count] == '/' && a[count + 3] == '/')
                       {
                        b[put] = '-';
                        put += 1;
                        strcat(b, c);
                        put += 3;
                        b[put] = '-';
                        put += 1;
                       }
                       if (a[count] == '/')
                       {
                        count += 4;
                       }
                       b[put] = a[count];
                       put += 1;
                       count += 1;
                  }
                  b[put] = '\0';
                  printf("%s" , b);
                  return 0;
}
#include <stdio.h>
/*Q85: Reverse a string.*/
    int main(){ char a[10000] , b[10000];
                int count = 0 , result , reverse = 0;
                printf("Enter the character which you want to reverse \n");
                fgets(a, 10000, stdin);
                while(a[count] != '\0')
                {
                  count += 1;
                }
                result = count - 1;
                while(result >= 0)
                {
                   b[reverse] = a[result];
                   result -= 1;
                   reverse += 1;
                }
                b[reverse] = '\0';
                printf("%s" , b);
                return 0;

    }
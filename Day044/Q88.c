#include <stdio.h>
#include <string.h>
/*Q88: Replace spaces with hyphens in a string.*/
    int main(){ char a[10000];
                int count = 0;
                printf("Enter the character which you want to enter\n");
                fgets(a, 10000, stdin);
                a[strcspn(a, "\n")] = '\0';
                while(a[count] !=  '\0')
                {
                    if (a[count] == 32)
                    {
                        a[count] = 45;
                    }
                    count += 1;
                }
                printf("%s" , a);
                return 0;

    }
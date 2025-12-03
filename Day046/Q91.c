#include <stdio.h>
#include <string.h>
/*Q91: Remove all vowels from a string.*/
    int main(){ char a[1000];
                int count = 0;
                printf("Enter the character from which you want the vowels to be removed\n");
                fgets(a, 1000, stdin);
                a[strcspn(a, "\n")] = '\0';
                while (a[count] != '\0')
                {
                    if (a[count] == 'a' || a[count] == 'e' || a[count] == 'i' || a[count] == 'o' || a[count] == 'u')
                    {
                        a[count] = 127;
                    }
                    count += 1;
                }
                printf("%s" , a);
                return 0;
    }
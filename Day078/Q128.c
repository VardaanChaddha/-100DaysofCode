#include <stdio.h>
/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
int main(){
            int vowels = 0 , consonants = 0 , c = 0;
            char a[1000];
            FILE *fp = fopen("sample.txt", "r");
            while((fgets(a, sizeof(a), fp)) != NULL)
            {   c = 0;
                while(a[c] != '\0')
                {
                    if(a[c] >= 65 && a[c] <= 90 || a[c] >= 97 && a[c] <= 122)
                    {
                        if(a[c] == 'a' || a[c] == 'e' || a[c] == 'i' || a[c] == 'o' || a[c] == 'u')
                        {
                            vowels += 1;
                        }
                        else
                        {
                            consonants += 1;
                        }
                    }
                    c += 1;
                }
            }
            printf("The number of vowels and consonants present are %d and %d", vowels , consonants);
            return 0;
}
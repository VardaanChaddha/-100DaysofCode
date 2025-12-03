#include <stdio.h>
/*Q83: Count vowels and consonants in a string.*/
int main()
{
    char input[10000];
    int vowels = 0, consonant = 0, count = 0;
    printf("Enter any character which you want to enter\n");
    fgets(input, 10000, stdin);
    while (input[count] != '\0')
    {
        if (input[count] >= 'A' && input[count] <= 'Z' || input[count] >= 'a' && input[count] <= 'z')
        {
            if (input[count] == 'a' || input[count] == 'e' || input[count] == 'i' || input[count] == 'o' || input[count] == 'u' || input[count] == 'A' || input[count] == 'E' || input[count] == 'I' || input[count] == 'O' || input[count] == 'U')
            {
                vowels += 1;
            }
            else
                consonant += 1;
        }
        count += 1;
    }
    printf("The values of vowels and consonants are %d and %d", vowels, consonant);
    return 0;
}
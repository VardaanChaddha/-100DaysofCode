#include <stdio.h>
/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

int main()
{
    FILE *fp = fopen("sample.txt", "r");
    char a[1000];
    int b, characters = 0, words = 0, lines = 0;

    if (fp == NULL)
    {
        printf("The file does not exist or cannot be opened.\n");
        return 0;
    }

    while (fgets(a, sizeof(a), fp) != NULL)
    {
        lines += 1;
        b = 0;

        while (a[b] != '\0')
        {
            char current = a[b];
            char prev = (b == 0) ? ' ' : a[b - 1];
            if (current != '\n')
                characters += 1;

            if (current != ' ' && current != '\n' &&
                (prev == ' ' || prev == '\n'))
            {
                words++;
            }

            b += 1;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
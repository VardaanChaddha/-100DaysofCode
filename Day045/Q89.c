#include <stdio.h>
#include <string.h>
/*Q89: Count frequency of a given character in a string.*/
int main()
{
    char a[1000], cha;
    int count = 0, rep = 0;
    printf("Enter the number which you want to enter\n");
    fgets(a, 1000, stdin);
    printf("Enter the alphabet which you want to enter\n");
    scanf(" %c", &cha);
    a[strcspn(a, "\n")] = '\0';
    while (a[count] != '\0')
    {
        if (a[count] == cha)
        {
            rep += 1;
        }
        count += 1;
    }
    printf("The total no of repetions of the character entered by you is %d", rep);
}
// Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main()
{

    int a;
    printf("Enter marks (in percentage):    ");
    scanf("%d", &a);

    if (a >= 90 && a <= 100)
    {
        printf("Grade A\n Doing great.. keep up the excellent work!\n");
    }

    if (a >= 80 && a < 90)
    {
        printf("Grade B\n Almost there.. just a little extra effort will make you shine!\n");
    }

    if (a >= 70 && a < 80)
    {
        printf("Grade C\n Good but could improve.. focus harder and you'll get even better.\n");
    }

    if (a >= 60 && a < 70)
    {
        printf("Grade D\n Needs improvement.. believe in yourself and take steps to progress.\n");
    }

    if (a >= 0 && a < 60)
    {
        printf("Grade F\n Struggling.. don't give up, keep trying and ask for help when needed.\n");
    }

    return 0;
}

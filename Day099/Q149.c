#include <stdio.h>
#include <stdlib.h>
/*Q149: Use malloc() to allocate structure memory dynamically and print details.
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
*/
struct student
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    int n, a = 0, b = 0;
    printf("Enter the number of students data you want to enter\n");
    scanf("%d", &n);
    struct student *ptr = malloc(n * sizeof(struct student));
    while (a < n)
    {
        printf("Enter the name of the student %d\n", a + 1);
        scanf("%s", &ptr[a].name);
        printf("Enter the roll number of the student %d\n", a + 1);
        scanf("%d", &ptr[a].roll);
        printf("Enter the marks of the student %d\n", a + 1);
        scanf("%d", &ptr[a].marks);
        a += 1;
    }
    while (b < n)
    {
        printf("Name - %s | Roll number - %d | Marks - %d\n", ptr[b].name, ptr[b].roll, ptr[b].marks);
        b += 1;
    }
    free(ptr);
    return 0;
}
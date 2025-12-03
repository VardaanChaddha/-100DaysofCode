#include <stdio.h>
/*Q145: Return a structure containing top student's details from a function.
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/
struct student
{
    char name[100];
    int roll;
    int marks;
};
struct student test()
{
    int a = 0, b = 0, topper = 0;
    printf("Enter the number of students you want to enter\n");
    scanf("%d", &a);
    struct student check[a];
    while (b < a)
    {
        printf("Enter the name of the student %d\n", b + 1);
        scanf("%s", &check[b].name);
        printf("Enter the roll number of the student %d\n", b + 1);
        scanf("%d", &check[b].roll);
        printf("Enter the marks of the student %d\n", b + 1);
        scanf("%d", &check[b].marks);
        b += 1;
    }
    b = 0;
    while (b < a)
    {
        if (check[b].marks > check[topper].marks)
        {
            topper = b;
        }
        b += 1;
    }
    return check[topper];
}
int main()
{
    struct student passed = test();  
    printf("Name - %s | Roll number - %d | Marks - %d" , passed.name , passed.roll , passed.marks);
    return 0;
}
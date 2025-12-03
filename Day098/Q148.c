#include <stdio.h>
#include <string.h>
/*Q148: Take two structs as input and check if they are identical.
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
*/
struct first{
    char name[100];
    int roll;
    int marks;
};
struct second{
    char name1[100];
    int roll1;
    int marks1;
    struct first check;
};
int main(){
            struct second check1;
            printf("Enter the name of the first student\n");
            scanf("%s" , &check1.check.name);
            printf("Enter the roll number of the second student\n");
            scanf("%d" , &check1.check.roll);
            printf("Enter the marks of the first student\n");
            scanf("%d" , &check1.check.marks);
            printf("Enter the name of the second student\n");
            scanf("%s" , &check1.name1);
            printf("Enter the roll number of the second student\n");
            scanf("%d" , &check1.roll1);
            printf("Enter the marks of the second student\n");
            scanf("%d" , &check1.marks1);
            if (strcmp(check1.check.name , check1.name1) == 0 && check1.check.roll == check1.roll1 && check1.check.marks == check1.marks1)
            {
                printf("\nSame\n");
            }
            else
            printf("\nNot same\n");
            return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Q150: Use pointer to struct to modify and display data using -> operator.
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/
struct student{
   char name[100];
   int roll;
   int marks;
};
void func(struct student *ptr){
    printf("Enter the name of the student again\n");
    scanf("%s" , ptr->name);
    printf("Enter the roll number of the student again\n");
    scanf("%d" , &ptr->roll);
    printf("Enter the marks of  the  student again\n");
    scanf("%d" , &ptr->marks);
    printf("Name - %s | Roll Number - %d | Marks - %d" , ptr->name , ptr->roll , ptr->marks);
}
int main(){ 
    struct student stu;
    char ans[2];
    printf("Enter the name of the student\n");
    scanf("%s" , stu.name);
    printf("Enter the roll number of the student\n");
    scanf("%d" , &stu.roll);
    printf("Enter the marks of the student\n");
    scanf("%d" , &stu.marks);
    printf("Do you want to modify the data (y/n)\n");
    scanf("%s" , &ans);
    if (strcmp(ans , "y") == 0)
    {
        func(&stu);
    }
    else
    {
        printf("Name - %s | Roll Number - %d | Marks - %d" , stu.name , stu.roll , stu.marks);
    }
    return 0;
}
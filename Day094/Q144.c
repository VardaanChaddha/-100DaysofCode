#include <stdio.h>
/*Q144: Write a function that accepts a structure as parameter and prints its members.
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/
 struct marks{
    char name[100];
    int roll;
    int marks;
 };
    void test(struct marks check){
                                   printf("Name - %s | Roll number - %d | Marks - %d" , check.name , check.roll , check.marks);
}
int main(){ 
             struct marks check;
             printf("Enter the name  of the student\n");
             scanf("%s" , &check.name);
             printf("Enter the roll number of the student\n");
             scanf("%d" , &check.roll);
             printf("Enter the marks of the student\n");
             scanf("%d" , &check.marks);
            test(check);
            return 0;
}
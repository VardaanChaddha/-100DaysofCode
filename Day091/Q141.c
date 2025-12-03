#include <stdio.h>
/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/
struct information{
    char name[50];
    int roll;
    int marks;
};
int main(){
     struct information check;
     printf("Enter the name of the student\n");
     scanf("%s" , &check.name);
     printf("Enter the roll no of the student\n");
     scanf("%d" , &check.roll);
     printf("Enter the marks of the student\n");
     scanf("%d", &check.marks);
     printf("Name: %s | Roll: %d | Marks: %d" , check.name , check.roll , check.marks);
     return 0;
}
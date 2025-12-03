#include <stdio.h>
/*Q143: Find and print the student with the highest marks.
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/
struct marks{
    char name[50];
    int roll;
    int marks;
};
int main(){ 
            int a = 0 , b = 0 , topper = 0;
            printf("Enter among how many students you want to compare the marks\n");
            scanf("%d" ,&a);
            struct marks compare[a];
            for(int i = 0; i < a; i += 1)
            {
                printf("Enter the name of the student %d\n" , i + 1);
                scanf("%s" , &compare[i].name);
                printf("Enter the roll number of the student %d\n" , i + 1);
                scanf("%d" , &compare[i].roll);
                printf("Enter the number of marks of the student %d\n" , i + 1);
                scanf("%d" , &compare[i].marks);
            }
            while(b < a)
            {
              if (compare[b].marks > compare[topper].marks)
              {
                topper = b;
              }
              b += 1;
            }
            printf("The topper of the class is Name - %s | Roll number - %d | Marks - %d" , compare[topper].name , compare[topper].roll , compare[topper].marks);
            return 0;
}
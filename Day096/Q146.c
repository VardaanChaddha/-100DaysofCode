#include <stdio.h>
/*Q146: Create Employee structure with nested Date structure for joining date and print details.
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/
struct date{
    int day;
    int month;
    int year;
};
struct id{
    char employee[100];
    int ID;
    struct date date1;
};
int main(){
    struct id check;
            printf("Enter the name of the employee\n");
            scanf("%s" , &check.employee);
            printf("Enter the ID of the employee\n");
            scanf("%d" , &check.ID);
            printf("Enter the joining date of the employee in this  format only (DD MM YYYY). PLEASE BE SURE THAT DATE IN THIS FORMAT ONLY\n");
            scanf("%d" , &check.date1.day);
            printf("Now Enter the month\n");
            scanf("%d" , &check.date1.month);
            printf("Now enter the year\n");
            scanf("%d" , &check.date1.year);
            printf("Name: %s | ID: %d | Joining date: %d/%d/%d" , check.employee , check.ID , check.date1.day , check.date1.month , check.date1.year);
            return 0;
}
#include <stdio.h>
#include <string.h>
/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
int main()
{
    char name[1000];
    int roll = 0, marks = 0, count = 0, b = 0;
    FILE *fp = fopen("record.txt", "w+");
    printf("Enter for how many students you want to enter the record\n");
    scanf("%d", &b);
    while (count < b)
    {  
        getchar();
        printf("Enter the name of the student\n");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Enter the roll and marks for your students\n");
        scanf("%d %d", &roll, &marks);
        fprintf(fp, "%s %d %d", name, roll, marks);
        count += 1;
    }
    rewind(fp);
    while ((fscanf(fp, "%s %d %d", name, &roll, &marks) == 3))
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nYour file has been closed successfully\n");
    return 0;
}
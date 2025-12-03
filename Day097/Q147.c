#include <stdio.h>
#include <string.h>
/*Q147: Store employee data in a binary file using fwrite() and read using fread().
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
int main()
{
    char name[100], joining_date[100], final[100], final_joiningdate[100];
    int id, finalid;
    FILE *ptr = fopen("first.txt", "wb");
    printf("Enter the name of the employee\n");
    scanf("%s", name);
    fwrite(name, 1, strlen(name) + 1, ptr);

    printf("Enter the id of the employee\n");
    scanf("%d", &id);
    fwrite(&id, sizeof(id) , 1 , ptr);

    printf("Enter the joining_date of the  employee in this format only(dd/mm/yy)\n");
    scanf("%s", joining_date);
    fwrite(joining_date, 1, strlen(joining_date) + 1, ptr);

    fclose(ptr);

    FILE *fp = fopen("first.txt", "rb");
    fread(final, 1, strlen(name) + 1 , fp);
    fread(&finalid, sizeof(finalid), 1, fp);
    fread(final_joiningdate, 1 , strlen(joining_date) + 1 , fp);   

    printf("Name - %s | ID - %d | Joining date - %s", final, finalid, final_joiningdate);
    return 0;
}
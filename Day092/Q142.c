#include <stdio.h>
/*Q142: Store details of 5 students in an array of structures and print all.
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/
struct details
{
  char name[50];
  int roll;
  int marks;
};
int main()
{
  struct details check[5];
  int a = 0;
  for (int i = 0; i < 5; i += 1)
  {
    printf("Enter the name of the student\n");
    scanf("%s", &check[i].name);
    printf("Enter the roll no the student\n");
    scanf("%d", &check[i].roll);
    printf("Enter the marks of the student\n");
    scanf("%d", &check[i].marks);
  }
  while (a < 5)
  {
    printf("Name - %s | Roll number - %d | Marks - %d\n", check[a].name, check[a].roll, check[a].marks);
    a += 1;
  }
  return 0;
}
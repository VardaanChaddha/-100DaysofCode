#include <stdio.h>
#include <string.h>
/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/
int main(){

          FILE *fpt = fopen("info.txt", "w");
          char name[1000];
          int age;
          printf("Enter your name\n");
          fgets(name, sizeof(name), stdin);
          name[strcspn(name, "\n")] = '\0';
          fprintf(fpt, "Name = %s\n", name);
          printf("Enter your age\n");
          scanf("%d", &age);
          fprintf(fpt, "\nAge = %d", age);
          fclose(fpt);
          printf("File closed successfully\n");
          return 0;
 
 
 
 
 
 
 
 
 
 
        }
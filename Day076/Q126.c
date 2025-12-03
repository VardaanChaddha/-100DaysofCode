#include <stdio.h>
/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/
int fun(){
           char a[1000];
           FILE *fp = fopen("hello.txt", "r");
           if (fp == NULL)
           {
             printf("There do not exists any file like this");
             return 0;
           }
           while((fgets(a, sizeof(a), fp) != '\0'));
           {
            printf("%s" , a);
           }
           fclose(fp);
           printf("\nFile closed successfully\n");
           return 0;
}
int test(){
           char a[1000];
           FILE *gp = fopen("check.txt", "r");
           if (gp == NULL)
           {
            printf("\nThere exists no such file\n");
            return 0;
           }
           while((fgets(a, sizeof(a), gp)) != '\0')
           {
            printf("%s", a);
           }
           fclose(gp);
           printf("\nFile closed successfully\n");
           return 0;
}
int main(){
            int a , b;
            a = fun();
            b = test();
            return 0;
}
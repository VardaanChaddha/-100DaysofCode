#include <stdio.h>
#include <string.h>
/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/
int main(){ 
            char a[1000];
            FILE *fp = fopen("hello.txt", "a");
            printf("Enter the content which you want to enter\n");
            fgets(a, sizeof(a), stdin);
            a[strcspn(a, "\n")] = '\0';
            fputs(a, fp);
            fclose(fp);
            printf("File closed successfully\n");
            return 0;
}
#include <stdio.h>
/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/
int main(){ 
    char a;
            FILE *fp = fopen("source.txt", "r");
            FILE *cp = fopen("destination.txt", "w");
            if (fp == NULL)
            {
                printf("There is some problem in opening the file\n");
            }
            while((a = fgetc(fp)) != EOF)
            fputc(a, cp);
            fclose(fp);
            fclose(cp);
            printf("File closed successfully\n");
            return 0;
}
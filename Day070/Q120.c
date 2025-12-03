#include <stdio.h>
#include <string.h>
/*Q120: Write a program to take a string input. Change it to sentence case.
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/
int main(){
            char a[1000];
            int b = 0;
            printf("Enter the sentence which you want to convert into sentence case\n");
            fgets(a, sizeof(a), stdin);
            a[strcspn(a, "\n")] = '\0';
            while (a[b] != '\0')
            {   
                if(a[b] == 32)
                {
                    a[b + 1] -= 32;
                }
                b += 1;
            }
            printf("%s", a);
            return 0;
}
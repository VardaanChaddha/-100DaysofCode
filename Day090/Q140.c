#include <stdio.h>
#include <string.h>
/*Q140: Define a struct with enum Gender and print person's gender.
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/
enum gender{
    MALE,
    FEMALE,
    OTHER
};
struct check{
     char type[50];
};
int main(){  int count = 0;
             printf("Enter your gender\n");
             struct check ans;
             scanf("%s" , &ans);
             if(strcmp(ans.type, "MALE") == 0)
             {
                printf("Your gender is Male");
                count += 1;
             }
             if(strcmp(ans.type, "FEMALE") == 0)
             {
                printf("Your gender is Female");
                count += 1;
             }
             if(strcmp(ans.type, "OTHER") == 0)
             {
                printf("Your gender is Other");
                count += 1;
             }
             if(count == 0)
             {
                printf("Please re-enter your gender\n");
             }

             return 0;
}
#include <stdio.h>
#include <string.h>
/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/
enum role{
    ADMIN,
    USER,
    GUEST
};
enum role check(char *b){
    if(strcmp(b, "ADMIN") == 0) return ADMIN;
    if(strcmp(b, "USER") == 0) return USER;
    if(strcmp(b, "GUEST") == 0) return GUEST;
    else
    return 3;
}
int main(){ char a[100];
            printf("Please enter your role\n");
            scanf("%s", &a);
            enum role status;
            status = check(a);
            switch(status){
                case ADMIN:
                printf("\nWelcome ADMIN!");
                break;
                case USER:
                printf("\nWelcome USER!");
                break;
                case GUEST:
                printf("\nWelcome GUEST!");
                break;
                default:
                printf("\nYour role is not clear please enter your role again");
            }
            return 0;
}
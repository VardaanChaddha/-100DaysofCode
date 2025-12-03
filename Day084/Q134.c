#include <stdio.h>
#include <string.h>
/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/
enum status{
     SUCCESS,
     FAILURE,
     TIMEOUT,
};
enum status check(char *b){
      if(strcmp(b, "SUCCESS") == 0) return SUCCESS;
      if(strcmp(b, "FAILURE") == 0) return FAILURE;
      if(strcmp(b, "TIMEOUT") == 0) return TIMEOUT;
      else 
      return 5;
}
int main(){
             char a[100];
             printf("Enter the current status of the task\n");
             scanf("%s", &a);
             enum status oper;
             oper = check(a);
             switch(oper){
                case FAILURE:
                printf("Operation Failed\n");
                break;
                case SUCCESS:
                printf("Operation Successfull\n");
                break;
                case TIMEOUT:
                printf("Operation still in Process\n");
                break;
                default:
                printf("Please enter the status again\n");
             }
             return 0;
}
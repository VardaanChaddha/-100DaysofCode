#include <stdio.h>
/*Q139: Show that enums store integers by printing assigned values.
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/
enum status{
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main(){ int a = 0;
            char *ptr[] = {"SUCCESS" , "FAILURE" , "TIMEOUT"};
            while(a < 3)
            {
                printf("%s = %d , " , ptr[a] , a);
                a += 1;
            }
            return 0;
    
}
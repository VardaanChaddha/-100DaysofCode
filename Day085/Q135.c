#include <stdio.h>
/*Q135: Assign explicit values starting from 10 and print them.
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12
*/
enum assign{
    value1= 10,
    value2,
    value3,
};
int main(){
            printf("A = %d\n", value1);
            printf("B = %d\n", value2);
            printf("C = %d\n", value3);
           return 0;
}
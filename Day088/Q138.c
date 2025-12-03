#include <stdio.h>
/*Q138: Print all enum names and integer values using a loop.
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/
enum names{
    Red = 0,
    Yellow = 1,
    Green = 2,
};
int main(){ 
            enum names check;
            int a = 0;
            char *b[3] = {"Red" , "Yellow" , "Green"};
            while(a < 3)
            { 
              check = a;
              printf("%s = %d\n", b[check] , a);
              a += 1;
            }
            return 0;
}
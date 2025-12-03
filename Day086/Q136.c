#include <stdio.h>
#include <string.h>
/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
enum oper{
    ADD,
    SUBTRACT,
    MULTIPLY,
};
enum oper check(char *c){
    if(strcmp(c, "ADD") == 0) return ADD;
    if(strcmp(c, "SUBTRACT") == 0) return SUBTRACT;
    if(strcmp(c, "MULTIPLY") == 0) return MULTIPLY;
    return 3;
}
int main(){
             int a , d;
             char b[100];
             printf("Enter the values on which you want to do the operation of your choice\n");
             scanf("%d %d", &a , &d);
             printf("NOW! Enter the operation whcih you want to perform on them\n");
             scanf("%s", b);
             enum oper perform;
             perform = check(b);
             if (perform == ADD)
             {
                printf("\n%d" , a + d);
             }
             if (perform == SUBTRACT)
             {
                printf("\n%d", a - d);
             }
             if (perform == MULTIPLY)
             {
                printf("\n%d" , a * d);
             }
             if (perform == 3)
             printf("Please choose the operator correctly this time\n");
}
#include <stdio.h>
#include <string.h>
/*Q133: Create an enum for months and print how many days each month has.
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/
enum months{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};
enum months check(char *b){
    if(strcmp(b, "January") == 0) return January;
    if(strcmp(b, "February") == 0) return February;
    if(strcmp(b, "March") == 0) return March;
    if(strcmp(b, "April") == 0) return April;
    if(strcmp(b, "May") == 0) return May;
    if(strcmp(b, "June") == 0) return June;
    if(strcmp(b, "July") == 0) return July;
    if(strcmp(b, "August") == 0) return August;
    if(strcmp(b, "September") == 0) return September;
    if(strcmp(b, "October") == 0) return October;
    if(strcmp(b, "November") == 0) return November;
    if(strcmp(b, "December") == 0) return December;
    else return 12;
    return 0;
}
int main(){
            char a[100];
            printf("Enter the month for which you want to see the days\n");
            scanf("%s", a);
            enum months days;
            days = check(a);
            switch(days){
                case January:
                printf("31\n");
                break;
                case February:
                printf("28 or 29\n");
                break;
                case March:
                printf("31\n");
                break;
                case April:
                printf("30\n");
                break;
                case May:
                printf("31\n");
                break;
                case June:
                printf("30\n");
                break;
                case July:
                printf("31\n");
                break;
                case August:
                printf("31\n");
                break;
                case September:
                printf("30\n");
                break;
                case October:
                printf("31\n");
                break;
                case November:
                printf("30\n");
                break;
                case December:
                printf("31\n");
                break;
                default:
                printf("UNKNOWN STUFF");
            }
}
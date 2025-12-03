#include <stdio.h>
/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/
enum weekdays{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};
int main(){
            enum weekdays days;
            days = Sunday;
            printf("Sunday = %d\n", days);
            days = Monday;
            printf("Monday = %d\n", days);
            days = Tuesday;
            printf("Tuesday = %d\n", days);
            days = Wednesday;
            printf("Wednesday = %d\n", days);
            days = Thursday;
            printf("Thursday = %d\n", days);
            days = Friday;
            printf("Friday = %d\n", days);
            days = Saturday;
            printf("Saturday = %d\n", days);
            return 0;
}
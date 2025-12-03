#include <stdio.h>
#include <string.h>
/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/
enum Trafficlights{
     Red = 1,
     Yellow = 2,
     Green = 3,
};
enum Trafficlights change(char *b){
        if(strcmp(b, "Green") == 0) return Green;
        if(strcmp(b, "Yellow") == 0) return Yellow;
        if(strcmp(b, "Red") == 0) return Red;
        return 0;
}
int main(){ char a[100];
            printf("Enter the trafficlight which you want to enter\n");
            scanf("%s", &a);
            enum Trafficlights signal;
            signal = change(a);
            if(signal == Green)
            {
                printf("\nGO");
            }
            else if (signal == Yellow)
            {
                printf("\nWAIT");
            }
            if (signal == Red)
            {
                printf("\nSTOP");
            }
            else
            printf("\nWhatever you have entered is surely not part of the traffic signal\n");
            return 0;
}
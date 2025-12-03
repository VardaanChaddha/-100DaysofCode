#include <stdio.h>
/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/
int main(){
            int num1 , num2 = 0 , sum = 0 , average = 0;
            FILE *fp = fopen("numbers.txt", "r");
            while((fscanf(fp, "%d", &num1)) != EOF)
            {
                sum += num1;
                num2 += 1;
            }
            average = sum / num2;
            printf("The value of sum and average is %d and %d", sum , average);
            fclose(fp);
            printf("\nYour file closed successfully\n");
            return 0;
}
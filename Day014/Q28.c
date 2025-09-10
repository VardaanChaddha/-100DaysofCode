// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
int n, product=1, num=2;
    printf("Enter a number:  ");
    scanf(" %d", &n);

    while (num<=n)
    {
        product = product * num;
        num = num + 2;
    }

    printf ("%d", product);
    
    return 0;
}
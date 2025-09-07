// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a, b, ans;
    char op;
    printf("Enter first digit:      ");
    scanf("%d", &a);
    printf("Enter second digit:      ");
    scanf("%d", &b);
    printf("Enter an operator:    ");
    scanf(" %c", &op);

    switch (op)
    {

    case '+':
        ans = a + b;
        printf("%d", ans);
        break;
    case '-':
        ans = a - b;
        printf("%d", ans);
        break;
    case '*':
        ans = a * b;
        printf("%d", ans);
        break;
    case '/':
        ans = a / b;
        printf("%d", ans);
        break;
    case '%':
        if (a>b)
        {
            ans = a % b;
            printf("%d", ans);
        }
        else
        {
            ans = b % a;
            printf("%d", ans);
        }
        
        
        break;
    }

    return 0;
}
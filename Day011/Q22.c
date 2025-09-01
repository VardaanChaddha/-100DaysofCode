// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    int cost, sell, perc, profit, loss;

    printf("Enter Cost price:   ");
    scanf("%d", &cost);
    printf("Enter Selling price:   ");
    scanf("%d", &sell);

    if (cost > sell)
    {
        loss = cost - sell;
        perc = (loss * 100) / cost;
        printf("Loss of %d percent", perc);
    }
    else if (cost < sell)
    {
        profit = sell - cost;
        perc = (profit * 100) / cost;
        printf("Profit of %d percent", perc);
    }
    else
    {
        printf("No profit No loss");
    }

    return 0;
}
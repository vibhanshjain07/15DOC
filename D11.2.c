/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>
int main() 
{
    float cost, selling, percentage;

    
    printf("Enter the Cost price: ");
    scanf("%f", &cost);

    printf("Enter the selling price:");
    scanf("%f",&selling);

    
    if (selling > cost) 
    {
        percentage = ((selling - cost) / cost) * 100; // using if condition so there is not a negative answer //
        printf("Profit %.1f %%", percentage); // %% is to instert a single "%" //
    } 
    else if (selling < cost) 
    {
        percentage = ((cost - selling) / cost) * 100;
        printf("Loss %.1f %%", percentage);
    }
     else 
    {
        printf("There is no profit or any loss"); // when the cost price and the selling price are same //
    }

    return 0;
}
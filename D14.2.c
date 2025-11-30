// Q-28 Write a program to print the product of even numbers from 1 to n. //
#include <stdio.h>

int main()
{
    int n;
    int product= 1; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) 
    {
        product *= i;
    }

    printf("Product of even numbers = %d", product);

    return 0;
}

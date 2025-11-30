//Q43: Write a program to check if a number is a strong number.//


#include <stdio.h>

int main() {
    int num, temp, digit, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  

    while (temp > 0) {
        digit = temp % 10;   

        
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;   
        temp = temp / 10;   
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}

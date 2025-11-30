//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int digit;
    int count[10] = {0}; 
    int maxCount = 0;
    int mostDigit = 0;

    
    printf("Enter a number: ");
    scanf("%lld", &num);

    
    if (num < 0) {
        num = -num;
    }


    while (num > 0) {
        digit = num % 10;    
        count[digit]++;      
        num = num / 10;     
    }

    
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }

    
    printf("Digit that occurs the most times: %d\n", mostDigit);

    return 0;
}

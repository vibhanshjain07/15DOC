#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;        

    
    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;           

    
    int middle = num % pow;   
    middle = middle / 10;

    
    int swapped = last * pow + middle * 10 + first;

    printf("After swapping: %d\n", swapped);

    return 0;
}


//Q37: Write a program to find the LCM of two numbers.//

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        max = a;
    else
        max = b;

    
    while (max <= a * b) {
        if (max % a == 0 && max % b == 0) 
            printf("LCM = %d\n", max);
            break;  
        
        max++;  
    }

    return 0;
}

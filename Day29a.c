
//Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int a[100];

    scanf("%d", &n);  

    printf("Enter the elements of the array:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    printf("Sum of elements is: %d", sum);

    return 0;
}



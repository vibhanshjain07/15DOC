//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int even = 0, odd = 0;

    scanf("%d", &n);   

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}

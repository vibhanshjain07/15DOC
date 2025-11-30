// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);


    k = k % n;


    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }


    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Q112 (Logic Enhancers) Maximum sum of any contiguous subarray using Kadane's algorithm.

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (i = 1; i < n; i++) {
        if (maxEndingHere + arr[i] > arr[i]) {
            maxEndingHere = maxEndingHere + arr[i];
        } else {
            maxEndingHere = arr[i];
        }

        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    printf("%d\n", maxSoFar);

    return 0;
}

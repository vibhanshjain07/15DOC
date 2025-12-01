// Q109 (Logic Enhancers) Maximum sum of all subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("0\n");
        return 0;
    }

    int currentSum = 0;
    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    for (i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}

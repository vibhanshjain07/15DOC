// Q110 (Logic Enhancers) Maximum element in each subarray of size k, print space separated.

#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}

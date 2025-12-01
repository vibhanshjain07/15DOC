// Q111 (Logic Enhancers) First negative integer in each subarray of size k, or 0 if none, print space separated.

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
        int found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0 ");
        }
    }
    printf("\n");

    return 0;
}

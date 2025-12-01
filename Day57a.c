// Q107 (Logic Enhancers) Previous greater element for each array element (brute force), print comma separated.

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    int ans[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        ans[i] = prev;
    }

    for (i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}

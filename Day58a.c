// Q108 (Logic Enhancers) Product of array except self without using division.

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n];
    int prefix[n];
    int suffix[n];
    int result[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    prefix[0] = 1;
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for (i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

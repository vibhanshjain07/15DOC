// Q103 (Logic Enhancers) Pivot index where left sum equals right sum, print leftmost index or -1.

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int total = 0;
    int leftSum = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}

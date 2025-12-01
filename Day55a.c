// Q105 (Logic Enhancers) Majority element (> n/2 times) or -1.

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;
    int bestCount = 0;

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > bestCount) {
            bestCount = count;
            majority = nums[i];
        }
    }

    if (bestCount > n / 2) {
        printf("%d\n", majority);
    } else {
        printf("-1\n");
    }

    return 0;
}

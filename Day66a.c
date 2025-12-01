// Q116 (Logic Enhancers) Two-sum: print indices i and j such that nums[i] + nums[j] == target or -1 -1.

#include <stdio.h>

int main() {
    int n, target;
    int i, j;
    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}

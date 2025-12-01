// Q101 (Logic Enhancers) Take a sorted array and target, print first and last occurrence indices, or -1 -1.

#include <stdio.h>

int main() {
    int n, target;
    int i;
    int first = -1, last = -1;

    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d %d\n", first, last);

    return 0;
}

// Q104 (Logic Enhancers) Pivot integer x such that sum 1..x equals sum x..n, else print -1.

#include <stdio.h>

int main() {
    int n;
    int x;
    int sum1, sum2;

    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        sum1 = x * (x + 1) / 2;
        sum2 = n * (n + 1) / 2 - (x - 1) * x / 2;
        if (sum1 == sum2) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}

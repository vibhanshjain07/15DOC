// Q118 (Logic Enhancers) Array has integers 0..n except one missing, print the missing number.

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;
    long long expected;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected = (long long)n * (n + 1) / 2;

    printf("%lld\n", expected - sum);

    return 0;
}

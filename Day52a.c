// Q102 (Logic Enhancers) Take sorted array and x, print index of smallest element >= x (ceil), or -1.

#include <stdio.h>

int main() {
    int n, x;
    int i;
    int index = -1;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}

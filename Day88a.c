//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Items {ONE, TWO, THREE, FOUR};

int main() {
    enum Items i;
    for(i = ONE; i <= FOUR; i++) {
        printf("%d\n", i);
    }
    return 0;
}

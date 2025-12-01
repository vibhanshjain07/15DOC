//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Num {A=10, B, C, D};

int main() {
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    return 0;
}

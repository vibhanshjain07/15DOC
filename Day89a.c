//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Test {X=5, Y=10, Z=20};

int main() {
    printf("%d\n", X);
    printf("%d\n", Y);
    printf("%d\n", Z);
    return 0;
}

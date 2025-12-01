//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Days d;
    for(d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d\n", d);
    }
    return 0;
}

// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int d, m, y;
    if (scanf("%d/%d/%d", &d, &m, &y) != 3) {
        return 0;
    }
    printf("%02d-Apr-%04d\n", d, y);
    return 0;
}

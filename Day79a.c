// Read integers from numbers.txt compute sum and average.
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int x, sum = 0, count = 0;

    if (fp == NULL) return 1;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) return 0;

    printf("%d %.2f", sum, (float)sum / count);
    return 0;
}

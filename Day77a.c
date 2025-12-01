// Convert lowercase letters in input.txt to uppercase in output.txt.
#include <stdio.h>

int main() {
    FILE *a = fopen("input.txt", "r");
    FILE *b = fopen("output.txt", "w");
    int c;

    if (a == NULL || b == NULL) return 1;

    while ((c = fgetc(a)) != EOF) {
        if (c >= 'a' && c <= 'z') c = c - 32;
        fputc(c, b);
    }

    fclose(a);
    fclose(b);
    return 0;
}

// Count vowels and consonants in a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int c, v = 0, cons = 0;

    if (fp == NULL) return 1;

    while ((c = fgetc(fp)) != EOF) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char x = c;
            if (x >= 'A' && x <= 'Z') x = x + 32;

            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u') v++;
            else cons++;
        }
    }

    fclose(fp);
    printf("%d %d", v, cons);
    return 0;
}

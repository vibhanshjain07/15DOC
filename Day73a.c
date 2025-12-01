// Read a file and count characters words and lines.
#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int c, chars = 0, words = 0, lines = 0;
    int inword = 0;

    if (fp == NULL) return 1;

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n') lines++;

        if (c != ' ' && c != '\n' && c != '\t') {
            if (inword == 0) {
                words++;
                inword = 1;
            }
        } else {
            inword = 0;
        }
    }

    fclose(fp);

    printf("%d %d %d", chars, words, lines);
    return 0;
}

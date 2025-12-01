// Open a file in append mode and add a new line.
#include <stdio.h>

int main() {
    char name[100], text[500];
    int i;

    printf("Filename: ");
    fgets(name, 100, stdin);
    for (i = 0; name[i] != '\0'; i++)
        if (name[i] == '\n') name[i] = '\0';

    FILE *fp = fopen(name, "a");
    if (fp == NULL) return 1;

    printf("Enter text:\n");
    fgets(text, 500, stdin);

    fputs(text, fp);

    fclose(fp);
    return 0;
}

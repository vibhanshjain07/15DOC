// Write a C program that opens an existing file (info.txt) and reads its contents using fgets() and prints all lines until EOF.
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char line[1000];
    if (fp == NULL) return 1;
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}

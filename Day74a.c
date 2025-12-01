// Take source and destination filenames and copy contents.
#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i;

    printf("Source: ");
    fgets(src, 100, stdin);
    for (i = 0; src[i] != '\0'; i++)
        if (src[i] == '\n') src[i] = '\0';

    printf("Destination: ");
    fgets(dest, 100, stdin);
    for (i = 0; dest[i] != '\0'; i++)
        if (dest[i] == '\n') dest[i] = '\0';

    FILE *a = fopen(src, "r");
    FILE *b = fopen(dest, "w");
    if (a == NULL || b == NULL) return 1;

    int ch;
    while ((ch = fgetc(a)) != EOF) {
        fputc(ch, b);
    }

    fclose(a);
    fclose(b);
    return 0;
}

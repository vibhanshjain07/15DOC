// Ask for filename check existence and display content.
#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Filename: ");
    fgets(name, 100, stdin);
    for (i = 0; name[i] != '\0'; i++)
        if (name[i] == '\n') name[i] = '\0';

    FILE *fp = fopen(name, "r");
    if (fp == NULL) {
        printf("Error");
        return 0;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}

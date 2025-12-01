// Q121 (File Handling) Create info.txt and write user’s name and age using fprintf().

#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *fp;

    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}

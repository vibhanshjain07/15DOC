// Store student records using fprintf then read them using fscanf.
#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    int n, roll, marks;
    char name[100];
    int i, j;

    printf("How many: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Name: ");
        fgets(name, 100, stdin);
        for (j = 0; name[j] != '\0'; j++)
            if (name[j] == '\n') name[j] = '\0';

        printf("Roll: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);
        getchar();

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}

// Q100 (Strings) Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k, len;

    fgets(s, sizeof(s), stdin);

    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                putchar(s[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}

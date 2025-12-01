// Q120 (File Handling) Take a string input and change it to sentence case.

#include <stdio.h>

int main() {
    char s[1000];
    int i;
    int newSentence = 1;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }

        if (newSentence && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
            newSentence = 0;
        }

        if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            newSentence = 1;
        }
    }

    printf("%s", s);
    return 0;
}

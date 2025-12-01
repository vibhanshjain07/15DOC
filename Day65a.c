// Q115 (Logic Enhancers) Check if two lowercase strings are valid anagrams.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int count[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

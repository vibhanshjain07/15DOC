// Q114 (Logic Enhancers) Length of the longest substring without repeating characters.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256] = {0};
    int left = 0, right = 0;
    int maxLen = 0;
    int len;

    fgets(s, sizeof(s), stdin);
    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    while (right < len) {
        unsigned char c = s[right];
        freq[c]++;

        while (freq[c] > 1) {
            unsigned char d = s[left];
            freq[d]--;
            left++;
        }

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
        }

        right++;
    }

    printf("%d\n", maxLen);

    return 0;
}

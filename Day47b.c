//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[20], longest[20];
    int i, j = 0, max = 0;

    printf("Enter a sentence:\n");
    gets(str);  

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];  
        } else {
            word[j] = '\0';      
            if (strlen(word) > max) {
                max = strlen(word);
                strcpy(longest, word);  
            }
            j = 0; 
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

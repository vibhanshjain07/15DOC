// Q83: Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // (For simplicity; use fgets in modern code)

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];

        
         {
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    // Output results
    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}

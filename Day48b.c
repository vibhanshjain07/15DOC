//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start, end, len;

    printf("Enter a sentence:\n");
    gets(str);  

    len = strlen(str);
    start = 0;

    for (i = 0; i <= len; i++) {
        
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            
            while (end >= start) {
                printf("%c", str[end]);
                end--;
            }

    
            if (str[i] == ' ')
                printf(" ");

            start = i + 1; 
        }
    }

    return 0;
}

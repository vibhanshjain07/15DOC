//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    enum Menu m = MULTIPLY;
    int a = 5, b = 3;

    switch(m) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }
    return 0;
}

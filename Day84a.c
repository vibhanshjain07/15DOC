//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum State {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum State s = TIMEOUT;

    if(s == SUCCESS) printf("Operation successful");
    else if(s == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}

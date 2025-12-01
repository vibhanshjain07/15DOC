//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p = {"Rohan", MALE};

    if(p.g == MALE) printf("Male");
    else printf("Female");

    return 0;
}

//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum Month m;
    for(m = JAN; m <= DEC; m++) {
        if(m == FEB) printf("28\n");
        else if(m==APR || m==JUN || m==SEP || m==NOV) printf("30\n");
        else printf("31\n");
    }
    return 0;
}

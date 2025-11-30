//Q77: Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m];


    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    int distinct = 1;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n && j < m; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}

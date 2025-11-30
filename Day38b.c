// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, m;
    int i, j;

    
    scanf("%d %d", &n, &m);
    int a[n][m];


    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    if(n != m) {
        printf("False");
        return 0;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}


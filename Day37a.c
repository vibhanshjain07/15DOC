// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[100][100];
    int rowSum[100];
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSum[i] = sum; 
    }


    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}

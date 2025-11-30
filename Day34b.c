// Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, arr[100], pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter position to delete: ");
    scanf("%d", &pos);


    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


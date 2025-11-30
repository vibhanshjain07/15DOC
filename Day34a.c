// Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, arr[100], pos, num, i;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter position and number to insert: ");
    scanf("%d %d", &pos, &num);


    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = num;
    n++; 

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, choice, position;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nChoose deletion position:\n");
    printf("1. Front\n");
    printf("2. Middle\n");
    printf("3. End\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        position = 0;
    } else if (choice == 2) {
        position = n / 2;
    } else {
        position = n - 1;
    }
    
    for (int i = position; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    
    printf("\nArray after deletion: ");
    for (int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;}
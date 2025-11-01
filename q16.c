#include <stdio.h>

int main() {
    int n, pos, value;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n+1];
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position (1-Front, 2-Middle, 3-End): ");
    scanf("%d", &pos);
    
    printf("Enter value to insert: ");
    scanf("%d", &value);
    
    printf("\nBefore: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    int index = (pos == 1) ? 0 : (pos == 2) ? n/2 : n;
    
    for (int i = n; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    
    printf("\nAfter: ");
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;}
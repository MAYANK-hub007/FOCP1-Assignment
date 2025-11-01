#include <stdio.h>

int main() {
    int n, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n], printed[n];
    
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        printed[i] = 0;
    }
    
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nDuplicate elements: ");
    
    for (int i = 0; i < n; i++) {
        if (printed[i]) {
            continue;
        }
        
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
            
            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i]) {
                    printed[j] = 1;
                }
            }
        }
    }
    
    if (!found) {
        printf("-1");
    }
    
    printf("\n");
    
    return 0;
}
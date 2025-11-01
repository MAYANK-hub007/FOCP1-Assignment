#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int isPeak = 1;
        
        if (i > 0 && arr[i] < arr[i-1])
            isPeak = 0;
        if (i < n-1 && arr[i] < arr[i+1])
            isPeak = 0;
        
        if (isPeak) {
            printf("Peak element %d found at index %d\n", arr[i], i);
            break;
        }
    }
    
    return 0;
}
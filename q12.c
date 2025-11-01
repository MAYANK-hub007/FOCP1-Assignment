#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of scores: ");
    scanf("%d", &n);
    
    int scores[n];
    
    printf("\nEnter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    
    printf("\nAll scores: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
    
    int max = scores[0];
    int min = scores[0];
    int max_index = 0;
    int min_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
            max_index = i;
        }
        if (scores[i] < min) {
            min = scores[i];
            min_index = i;
        }
    }
    
    printf("\nMaximum score: %d (at position %d)\n", max, max_index + 1);
    printf("Minimum score: %d (at position %d)\n", min, min_index + 1);
    printf("Difference: %d\n", max - min);
    
    return 0;
}
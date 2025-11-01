#include <stdio.h>

int main() {
    int n, found = -1;
    
    printf("Enter number of scores: ");
    scanf("%d", &n);
    
    int scores[n];
    
    printf("Enter %d scores: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = i;
            break;
        }
    }
    
    if (found != -1)
        printf("Score 99 found at index %d\n", found);
    else
        printf("Score 99 not found\n");
    
    return 0;
}
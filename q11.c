#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;
    
    printf("Enter number of scores: ");
    scanf("%d", &n);
    
    int scores[n], even_array[n], odd_array[n];
    
    printf("Enter scores: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] % 2 == 0)
            even_array[even_count++] = scores[i];
        else
            odd_array[odd_count++] = scores[i];
    }
    
    printf("\nEven scores: ");
    for (int i = 0; i < even_count; i++)
        printf("%d ", even_array[i]);
    
    printf("\nOdd scores: ");
    for (int i = 0; i < odd_count; i++)
        printf("%d ", odd_array[i]);
    
    printf("\n");
    
    return 0;}
    
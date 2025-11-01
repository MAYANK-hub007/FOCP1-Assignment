#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("\nBinary Pyramid Pattern:\n\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>

void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_pointer(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Choose method:\n1. Temp\n2. Arithmetic\n3. XOR\n4. Pointer\nChoice: ");
    scanf("%d", &choice);
    
    printf("Before: x=%d, y=%d\n", x, y);
    
    if (choice == 1) swap_temp(&x, &y);
    else if (choice == 2) swap_arithmetic(&x, &y);
    else if (choice == 3) swap_xor(&x, &y);
    else if (choice == 4) {
        int *px = &x, *py = &y;
        swap_pointer(&px, &py);
        x = *px;
        y = *py;
    }
    
    printf("After: x=%d, y=%d\n", x, y);
    
    return 0;
}
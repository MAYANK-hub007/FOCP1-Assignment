#include <stdio.h>

int subtract_bitwise(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int subtract_twos_complement(int a, int b) {
    return a + (~b + 1);
}

int main() {
    int a, b, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Choose method:\n1. Bitwise\n2. Two's complement\nChoice: ");
    scanf("%d", &choice);
    
    int result = (choice == 1) ? subtract_bitwise(a, b) : subtract_twos_complement(a, b);
    
    printf("%d - %d = %d\n", a, b, result);
    
    return 0;
}
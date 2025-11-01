#include <stdio.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int choice;
    
    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\nChoice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        long long binary;
        printf("Enter binary: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } else {
        int decimal;
        printf("Enter decimal: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    }
    
    return 0;
}
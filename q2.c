#include <stdio.h>

int hcf_recursive(int a, int b) {
    if (b == 0)
        return a;
    return hcf_recursive(b, a % b);
}

int hcf_iterative(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, choice;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    num1 = num1 < 0 ? -num1 : num1;
    num2 = num2 < 0 ? -num2 : num2;
    
    printf("Choose method:\n1. Recursive\n2. Iterative\nChoice: ");
    scanf("%d", &choice);
    
    int result = (choice == 1) ? hcf_recursive(num1, num2) : hcf_iterative(num1, num2);
    
    printf("HCF: %d\n", result);
    
    return 0;
}
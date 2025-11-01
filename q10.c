#include <stdio.h>

int main() {
    int n, count = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    
    printf("\nEnter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    printf("\nAll marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
    
    printf("\nStudents who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99\n", i + 1);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No student scored 99\n");
    }
    
    printf("\nTotal count: %d student(s) scored 99\n", count);
    
    return 0;
}
#include <stdio.h>

int main() {
    int terms, p1 = 0, p2 = 1, next;
    printf("Enter number of terms (after 0, 1): ");
    scanf("%d", &terms);
    if(terms < 1) {
        printf("Please enter a positive number!\n");
        return 0;
    }
    printf("Fibonacci Series: %d, %d, ", p1, p2);
    for(int i = 0; i < terms; i++) {
        next = p1 + p2;
        printf("%d ", next);
        p1 = p2;
        p2 = next;
    }
    
    return 0;
}
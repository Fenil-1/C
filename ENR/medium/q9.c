#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int range;
    printf("Enter the range till which you want to print the prime numbers: ");
    scanf("%d", &range);
    
    for (int num = 2; num <= range; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
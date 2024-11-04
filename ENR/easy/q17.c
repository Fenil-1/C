#include <stdio.h>
#include <math.h>

int main() {
    int n, n1, extract, store, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;  // Store the original number in n1
    extract = n;  // Initialize extract with n to start the loop

    while (extract != 0) {
        store = extract % 10;            // Get the last digit
        sum += pow(store, 3);             // Add the cube of the last digit to sum
        extract = extract / 10;           // Remove the last digit
    }

    if (n1 == sum) {
        printf("Yes, %d is an Armstrong number\n", n1);
    } else {
        printf("No, %d is not an Armstrong number\n", n1);
    }

    return 0;
}

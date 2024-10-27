#include <stdio.h>

int main() {
    int a, b;
    float add, sub, mul, div;
    int modulo;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b; // Cast to float for correct division
    modulo = a % b; // Modulo results in an integer

    printf("Addition of 2 numbers will be %f\n", add);
    printf("Subtraction of 2 numbers will be %f\n", sub);
    printf("Multiplication of 2 numbers will be %f\n", mul);
    printf("Division of 2 numbers will be %f\n", div);
    printf("Modulo of 2 numbers will be %d\n", modulo); // Use %d for integer

    return 0;
}

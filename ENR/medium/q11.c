
#include <stdio.h>

int main() {
    int input, reversed = 0, output;
    
    // Get user input
    printf("Enter a number: ");
    scanf("%d", &input);

    // Reverse the number
    while(input != 0) {
        reversed = (reversed * 10)+input % 10;         
        input = input / 10;           
        output = reversed ; 
    }

    printf("Reversed number is %d", output);

    return 0;
}

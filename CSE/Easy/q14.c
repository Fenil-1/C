#include <stdio.h>

int main() {
    int a;
    float b;
    char c;  // Single character
    double d;
    char str[] = "sixty nine";  // String

    a = 69;
    b = 69.69;
    c = 's';  // Single character
    d = 69.6969696969696969;

    // Print values
    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("character: %c\n", c);
    printf("string: %s\n", str);  // String printing
    printf("double: %.15lf\n", d);

    return 0;
}

#include <stdio.h>

int main() {
   
    for (int i = 0; i < 4; i++) {
        for (int k = 4; k > i; k--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < i + 2; k++) {
            printf(" ");
        }
        for (int j = 3; j > i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

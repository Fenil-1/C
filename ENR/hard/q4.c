#include <stdio.h>
#include <string.h>

int main() {
    char str[100],rev[100];  
    printf("Enter a string: ");
    gets(str);
    int length = strlen(str);
    printf("Original string: %s\n", str);
    int index=0;

    for(int i = length-1; i>=0 ;i--) {
        rev[index]= str[i];
        index++;
    }
    
    printf("Reversed string: %s\n", rev);
    return 0;
}
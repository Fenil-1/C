#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0;
    int inWord = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        if (isspace(ch)) {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        wordCount++;
    }

    fclose(file);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    return 0;
}

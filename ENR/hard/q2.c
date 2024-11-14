#include <stdio.h>
#include <string.h>
int isPalindrome(char word[]) {
    int length = strlen(word);
    int start = 0;
    int end = length - 1;

    while(start < end) {
        if(word[start] != word[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1;   
}

int main() {
    char sentence[1000]; 
    char word[100];         
    int i, j;             
    
    printf("Enter a sentence: ");
    gets(sentence);
    printf("\nChecking each word in the sentence...\n");
    i = 0;  
    j = 0;  
    while(sentence[i] != '\0') {
        if(sentence[i] != ' ') {
            word[j] = sentence[i];
            j++;
        }
        if(sentence[i] == ' ' || sentence[i+1] == '\0') {
            if(j != 0) { 
                word[j] = '\0'; 
                printf("Word: %s\n", word);
                if(isPalindrome(word)) {
                    printf(" Is a palindrome!\n");
                } else {
                    printf(" Not a palindrome\n");
                }
                printf("\n");
                j = 0; 
            }
        }
        i++;
    } 
    return 0;
}
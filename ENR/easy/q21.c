#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    char names[n][50];  
    int rollno[3];      
    float marks[3];     

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        
        printf("Enter name: ");
        scanf("%s", names[i]);
        
        printf("Enter roll number: ");
        scanf("%d", &rollno[i]);
        
        printf("Enter marks: ");
        scanf("%f", &marks[i]);
    }
    
    printf("\n-------- Student Details --------\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", names[i]);
        printf("Roll Number: %d\n", rollno[i]);
        printf("Marks: %.2f\n", marks[i]);
        printf("\n");
    }
    
    return 0;
}
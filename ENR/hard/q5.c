#include <stdio.h>

int main() {
    int arr[100];  
    int size;      
    
    printf("Enter the size of array: ");
    scanf("%d", &size);
    if(size < 2) {
        printf("Array should have at least 2 elements!\n");
        return 0;
    }
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    int second_largest = -999999;  // Using a very small number
    for(int i = 0; i < size; i++) {
        if(arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    printf("\nLargest element: %d\n", largest);
    if(second_largest == -999999) {
        printf("No second largest element exists (all elements are same)\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }
    
    return 0;
}
#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, max_1, max_2;
    max_1 = 0;
    max_2 = 0;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Find max_1
    for(int i = 0; i < array_size; i++){
        if(a[i] > max_1){
            max_1 = a[i];
        }
    }

    // Find max_2
    for(int i = 0; i < array_size; i++){
        if(a[i] > max_2 && a[i] < max_1){
            max_2 = a[i];
        }
    }

    // Print the result
    printf("Second largest = %i", max_2);

    return 0;
}
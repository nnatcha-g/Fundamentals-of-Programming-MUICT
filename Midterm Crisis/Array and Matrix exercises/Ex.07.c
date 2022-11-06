#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, counter;
    counter = 0;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Count
    for(int i = 0; i < array_size; i++){
        if(a[i] < 0){
            counter++;
        }
    }

    // Print out the result
    printf("Total number of negative elements: %i", counter);

    return 0;
}
#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];
    int b[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Copy value from array a to array b
    for(int i = 0; i < array_size; i++){
        b[i] = a[i];
    }

    // Print array a
    printf("Array1: ");
    for(int i = 0; i < array_size; i++){
        printf("%i ", a[i]);
    }

    // Print array b
    printf("\nArray2: ");
    for(int i = 0; i < array_size; i++){
        printf("%i ", b[i]);
    }

    return 0;
}
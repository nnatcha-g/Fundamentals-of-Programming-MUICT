#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, max, min;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Find min and max
    for(int i = 0; i < array_size; i++){
        if(i == 0){
            max = a[i];
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }

    // Print the result
    printf("Maximum = %i\n", max);
    printf("Minimum = %i", min);

    return 0;
}
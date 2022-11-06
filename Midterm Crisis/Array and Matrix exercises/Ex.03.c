#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, sum;
    sum = 0;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Find summation
    for(int i = 0; i < array_size; i++){
        sum = sum + a[i];
    }

    // Print sum
    printf("%i", sum);

    return 0;
}
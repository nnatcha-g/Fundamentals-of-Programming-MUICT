#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Print out the value from an array
    for(int i = 0; i < array_size; i++){
        if(i != array_size-1 && i != 0 && a[i] < 0){
                printf(", ");
            }
        if(a[i] < 0){
            printf("%i", a[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, insert, index, x, y;

    // Input array_size
    scanf("%i", &array_size);
    
    // Declare array to store input
    int a[array_size+1];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Input value to insert
    scanf("%i", &insert);

    // Input value of index
    scanf("%i", &index);
    if(index > array_size){
        printf("Invalid Position");
    } else {
        if(index == 0){
            index++;
        } else {
            index--;
        }
        // Insert an element into an array
        for(int i = index; i < array_size+1; i++){
            x = a[i];
            y = a[i+1];
            a[i+2] = y;
            a[i+1] = x;
        }
        a[index] = insert;
        // Print out the value from an array
        for(int i = 0; i < array_size+1; i++){
            printf("%i ", a[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main(void){
    // Delcare variable to store input
    int array_size, del, counter, k;
    counter = 0;
    k = 0;

    // Input array_size
    scanf("%i", &array_size);

    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Input delete value
    scanf("%i", &del);

    // Check delete value inside an array
    for(int i = 0; i < array_size; i++){
        if(a[i] == del){
            k++;
        }
    }

    // Store position user want to remove
    int position[k];
    int x = 0;
    int y = 0;

    // Store position inside an array
    for(int i = 0; i < array_size; i++){
        if(a[i] == del){
            position[x] = i;
            x++;
        }
    }

    // if position of a[i] equal to position that need to be remove, then change the value of it to be the 
    for(int i = 0; i < array_size; i++){
        if(i == position[y]){
            a[i] = a[k+1];
            y++;
        }
    }


    // Output
    for(int i = 0; i < array_size-k; i++){
        printf("%i ", a[i]);
    }
    
    return 0;
}
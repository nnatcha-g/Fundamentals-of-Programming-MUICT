#include<stdio.h>

int main(void){
    // Declare variable to store input
    int array_rows, array_columns;

    // Input array_rows and array_columns
    scanf("%i %i", &array_rows, &array_columns);

    // Declare array to store input
    int a[array_rows][array_columns];

    // Declare vector to store input
    int b[array_columns];

    // Input value inside an array
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            scanf("%i", &a[i][j]);
        }
    }

    // Input vector
    for(int j = 0; j < array_columns; j++){
        scanf("%i", &b[j]);
    }

    // Declare array to store result
    int c[array_rows];

    // Array result base value
    for(int j = 0; j < array_rows; j++){
        c[j] = 0;
    }

    // Process calculate result
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            c[i] = c[i] + (a[i][j] * b[j]);
        }
    }

    // Print out the result
    for(int j = 0; j < array_rows; j++){
        printf("%i ", c[j]);
    }

    return 0;
}
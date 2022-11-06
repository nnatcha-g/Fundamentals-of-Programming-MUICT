#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_rows, array_columns;

    // Input array_rows and array_columns
    scanf("%i %i", &array_rows, &array_columns);

    // Declare array to store input
    int a[array_rows][array_columns];
    int b[array_rows][array_columns];
    int c[array_rows][array_columns];

    // Input value inside array_a
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            scanf("%i", &a[i][j]);
        }
    }

    // Input value inside array_b
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            scanf("%i", &b[i][j]);
        }
    }

    // Declare value inside array_c
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            c[i][j] = 0;
        }
    }

    // Perform multiplication
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            c[i][j] = c[i][j] + (a[i][j] * b[i][j]);
        }
    }

    // Print out the result
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            printf("%i ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
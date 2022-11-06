#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_rows, array_columns, flip;

    // Input array_rows and array_columns
    scanf("%i %i", &array_rows, &array_columns);

    // Declare array to store normal input
    int a[array_rows][array_columns];

    // Declare array to store flip array
    int b[array_rows][array_columns];

    // Input value inside an array
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            scanf("%i", &a[i][j]);
        }
    }

    // Choose how to flip
    // 1 - Vertical
    // 2 - Horizontal
    scanf("%i", &flip);

    int x, y;
    x = array_columns;
    y = array_rows;

    // Check flip
    switch(flip){
        case 1:
            for(int i = 0; i < array_rows; i++){
                for(int j = 0; j < array_columns; j++){
                    if(array_columns%2 == 0){
                        b[i][j] = a[i][x-j-1];
                        if(j == array_columns/2){
                            b[i][j] = a[i][j];
                        }
                    } else {
                        b[i][j] = a[i][x-j-1];
                    }
                }
            }
            break;
        case 2:
            for(int i = 0; i < array_rows; i++){
                for(int j = 0; j < array_columns; j++){
                    if(array_columns%2 == 0){
                        b[i][j] = a[y-i-1][j];
                        if(i == array_rows/2){
                            b[i][j] = a[i][j];
                        }
                    } else {
                        b[i][j] = a[y-i-1][j];
                    }
                }
            }
            break;
        default:
            printf("Invalid");
            break;
    }

    // Boolean flag
    int k;
    k = 0;

    // Check if the two matrix is the same or not
    for(int i = 0; i < array_rows; i++){
        for(int j = 0; j < array_columns; j++){
            if(a[i][j] != b[i][j]){
                printf("different");
                k++;
                break;
            } else if (a[i][j] == b[i][j] && i == array_rows-1 && j == array_columns-1){
                printf("same");
                k++;
                break;
            }
            if(k > 0){
                break;
            }
        }
        if(k > 0){
                break;
            }
    }

    return 0;
}
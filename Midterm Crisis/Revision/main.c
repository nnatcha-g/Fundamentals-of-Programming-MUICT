#include<stdio.h>
int main() {
    
    // Declare Variable
    int array_rows, array_columns;

    // Input array_size
    scanf("%i %i", &array_rows, &array_columns);

    // Declare array to store input
    int a[array_rows][array_columns];

    // Input value inside an array
    for(int i = 0; i < array_rows; i++){ // Assign Rows
        for(int j = 0; j < array_columns; j++){ // Assign Columns
            scanf("%i", &a[i][j]);
        }
    }

    // Output value from an array
    for(int i = 0; i < array_rows; i++){ // Assign Rows
        for(int j = 0; j < array_columns; j++){ // Assign Columns
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }

    // // 90 Triangle
    // for (int i=1 ; i<=k ; i++) {
    //     for (int j=0 ; j<i ; j++) {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // // Normal Triangle
    // for (int i=1 ; i<=k ; i++) {
    //     for (int j=0 ; j<i ; j++) {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }
    // for (int i=1 ; i<=k ; i++) {
    //     for (int j=0 ; j<i ; j++) {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // Harder
    // for(int i = 1; i <= k; ){
    //     for(){

    //     }
    // }

    return 0;
} 

#include<stdio.h>

void find_cube(int num_1);

int main(void){
    int input;
    printf("Input any number: ");
    scanf("%i", &input);
    printf("Cube of %i = ", input);
    find_cube(input);
    return 0;
}

void find_cube(int num_1){
    int result;
    result = num_1 * num_1 * num_1;
    printf("%i", result);
}
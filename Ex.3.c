#include<stdio.h>

int find_max(int input_1, int input_2);
int find_min(int input_1, int input_2);

int main(void){
    int input_1, input_2;
    printf("Input two numbers: ");
    scanf("%i %i", &input_1, &input_2);
    printf("Maximum = %i", find_max(input_1, input_2));
    printf("\nMinimum = %i", find_min(input_1, input_2));
    return 0;
}

int find_max(int input_1, int input_2){
    int max;
    if(input_1 > input_2){
        max = input_1;
    } else {
        max = input_2;
    }
    return max;
}

int find_min(int input_1, int input_2){
int min;
    if(input_1 > input_2){
        min = input_2;
    } else {
        min = input_1;
    }
    return min;
}
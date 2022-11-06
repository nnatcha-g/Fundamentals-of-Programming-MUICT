#include<stdio.h>

void odd_even(int input);

int main(void){
    int input;
    printf("Input any number: ");
    scanf("%i", &input);
    odd_even(input);
    return 0;
}

void odd_even(int input){
    if(input%2 == 0){
        printf("%i is even", input);
    } else {
        printf("%i is odd", input);
    }
}
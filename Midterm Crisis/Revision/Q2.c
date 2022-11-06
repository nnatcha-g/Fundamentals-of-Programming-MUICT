#include<stdio.h>

int main(void){
    // Declare variable to store input
    int first_num, second_num;

    // Input first_num
    scanf("%i", &first_num);

    // Validate Input second_num
    do{
        scanf("%i", &second_num);
    }while(second_num <= first_num);

    // Print out the odd number between first_num and second_num
    for(int i = first_num; i <= second_num; i++){
        if(i%2 == 1){
            printf("%i ", i);
        }
    }

    return 0;
}
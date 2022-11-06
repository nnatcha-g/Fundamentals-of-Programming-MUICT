#include<stdio.h>

int main(void){
    // Declare variable to store input
    int choice_1, choice_2;

    // Input Home or Nearest branch
    scanf("%i", &choice_1);

    // Check
    switch(choice_1){
        case 1:
            printf("50 baht");
            break;
        case 2:
            // Input nearest branch
            scanf("%i", &choice_2);
            switch(choice_2){
                case 1:
                    printf("20 baht");
                    break;
                case 2:
                    printf("30 baht");
                    break;
                case 3:
                    printf("35 baht");
                    break;
                default:
                    printf("Invalid");
                    break;
            }
            break;
        default:
            printf("Invalid");
            break;
    }

    return 0;
}
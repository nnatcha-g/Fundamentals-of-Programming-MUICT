#include <stdio.h>

int main(void){
    // Declare variable to store input
    int array_size, delete;

    // Input array_size
    scanf("%i", &array_size);

    // Declare array to store input
    int a[array_size];

    // Input value inside an array
    for(int i = 0; i < array_size; i++){
        scanf("%i", &a[i]);
    }

    // Input value you want to delete
    scanf("%i", &delete);

    // Declare variable to store value from array before sort
    int x, y;

    // Bubble Sort but starting from the back
  for(int j = array_size; j > 0; j--){
    for(int k = 0; k < array_size; k++){
      if(k == array_size){
        break;
      }
      x = a[i];
      y = a[i+1];
      if(x > y){
        x[i+1] = y;
        x[i] = x;
      }
    }
  }

    for(int i = 0; i < array_size; i++){
        printf("%i", a[i]);
    }
    
    return 0;
}
#include<stdio.h>
#include<math.h>

float diameter(float radius);
float circumference(float radius);
float area(float radius);

double pi = 22.0/7.0;

int main(void){
    float radius;
    printf("Input radius: ");
    scanf("%f", &radius);
    printf("Diameter = %.0f units", diameter(radius));
    printf("\nCircumference = %.2f", circumference(radius));
    printf("\nArea = %.2f", area(radius));
    return 0;
}

float diameter(float radius){
    float diameter;
    diameter = radius*2;
    return diameter;
}

float circumference(float radius){
    float circumference;
    circumference = 2*pi*radius;
    return circumference;
}

float area(float radius){
    float area;
    area = pi*radius*radius;
    return area;
}
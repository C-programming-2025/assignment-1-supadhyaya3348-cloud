// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>

int main() {
    float x, y, average;

    printf("Enter first number (x): ");
    scanf("%f", &x);
    printf("Enter second number (y): ");
    scanf("%f", &y);

    average = (x + y) / 2;

   
    printf("The average of %.2f and %.2f is: %.2f\n", x, y, average);

    return 0;
}

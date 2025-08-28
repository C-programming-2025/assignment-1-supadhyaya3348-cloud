// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>
int main() {
    float width;
    float height;
    float area;
    printf("Enter the width  of the rectangle:");
    scanf("%f",&width);
        printf("Enter the height of the rectangle:");
        scanf("%f",&height);
    area=width*height;
    printf("The area of the rectangle is: %2f\n",area);
    return 0;
}
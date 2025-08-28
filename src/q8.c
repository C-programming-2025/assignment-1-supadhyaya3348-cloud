
#include <stdio.h>
int main() {
    float Celsius;
    float Fahrenheit;
    printf("Enter temp in Celsius:");
    scanf("%f",&Celsius);
    Fahrenheit=(Celsius*9/5)+32;
    printf("%.2f Celsius=%.2f Fahrenheit\n", Celsius, Fahrenheit);
    return 0;
}
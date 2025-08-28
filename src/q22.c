#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    int result;

    printf("Enter first number: ");
    scanf("%lf", &x);
    printf("Enter second number: ");
    scanf("%lf", &y);

    result = (int)round(sqrt(x + y));

    printf("Rounded square root of sum: %d\n", result);

    return 0;
}

#include <stdio.h>
int main () {
     int a, b, c;
    printf("Enter three integers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    
    printf("Result: %d\n", (a > b) && (c != 0));

    return 0;
}
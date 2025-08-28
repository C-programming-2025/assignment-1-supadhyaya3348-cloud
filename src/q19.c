#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);


    printf("Condition 'a == b and b != c' is %s.\n", (a == b && b != c) ? "true" : "false");

    return 0;
}

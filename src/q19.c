#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value  a: ");
    scanf("%d", &a);
    printf("Enter value  b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);


    printf("Condition 'a == b and b != c' is %d.\n", (a == b && b != c) ? 1 : 0);

    return 0;
}
 
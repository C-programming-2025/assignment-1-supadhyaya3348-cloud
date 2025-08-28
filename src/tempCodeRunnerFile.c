#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d\n", (n > 0 && n % 2 == 0));

    return 0;
}
#include <stdio.h>

int main() {
    int a;
    printf("Enter a value for a: ");
    scanf("%d", &a);

    // Perform operation directly in printf
    printf("%d\n", (++a) * 3 - 10);

    return 0;
}

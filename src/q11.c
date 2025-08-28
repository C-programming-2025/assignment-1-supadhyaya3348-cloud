
#include <stdio.h>

int main() {
    int a, result;

    printf("Enter a value for a: ");
    scanf("%d", &a);

    
    result = (++a) * 3 - 10;

    
    printf("After incrementing a by 1, multiplying by 3, and subtracting 10, the result is: %d\n", result);

    return 0;
}

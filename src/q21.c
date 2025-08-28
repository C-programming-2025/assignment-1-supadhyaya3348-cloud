#include <stdio.h>

int main() {
    int x, y, z, temp;


    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    printf("Enter value for z: ");
    scanf("%d", &z);

    temp = x; x = y; y = z; z = temp;

   
    printf("After cyclic swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}

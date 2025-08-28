#include <stdio.h>
int main () {
    int x;
    int y;
    int z;
    printf("Enter a three number:");
    scanf("%d %d %d",&x,&y,&z);
     printf("Sum of squares: %d\n", (x*x) + (y * y) + (z* z));
     return 0;
}
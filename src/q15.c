// Write an expression that checks if a number is both positive and even.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Result;%d\n",(num>0)&&(num%2==0));
    return 0;
}
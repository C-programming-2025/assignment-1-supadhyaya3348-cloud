#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Result;%d\n",(num>0)&&(num%2==0));
    return 0;
}
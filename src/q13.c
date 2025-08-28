#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Result:%d\n",((num/2)*2==num)&&((num/3)*3==num));
    return 0;

}
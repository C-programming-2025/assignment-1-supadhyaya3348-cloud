#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%c is %s an uppercase letter.\n", ch, (ch >= 'A' && ch <= 'Z') ? "" : "not");

    return 0;
}

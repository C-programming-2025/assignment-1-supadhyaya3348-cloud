// Write a C program to prompt the user for their name and display a personalized greeting message.

 #include <stdio.h>
 int main() {
char name[20] ;
printf("Enter your name:");
scanf("%19s",name);
printf("Hello, %s! Welcome to C programming!\n", name);
    return 0;
}
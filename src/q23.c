#include <stdio.h>

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

   
    int is_power_of_2 = (num > 0 && (num & (num - 1)) == 0);


  
  printf("%d", is_power_of_2);

    return 0;
}

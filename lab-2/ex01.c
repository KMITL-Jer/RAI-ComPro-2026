#include <stdio.h>

int main(){

    int num1; 
    float num2;
    char letter1;

    printf("\n Please enter an integer value:\n");
    scanf("%d", &num1);
    printf("You entered %d\n", num1);

    printf("\n Please enter a float value:\n");
    scanf("%f", &num2);
    printf("You entered %f\n", num2);

    printf("\n Please enter a character:\n");
    scanf(" %c", &letter1);
    printf("You entered %c\n", letter1);

    return 0;
}
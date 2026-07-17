#include <stdio.h>

int main(){

    int num1, num2, num3, max, min, sum;
    
    printf("Enter 3 Numbers (spaced apart): "); scanf("%d", &num1); scanf("%d", &num2); scanf("%d", &num3);
    
    min = num1;
    if (min > num2){
        min = num2;
    }
    if (min > num3){
        min = num3;
    }

    max = num1;
    if (max < num2){
        max = num2;
    }
    if (max < num3){
        max = num3;
    }

    sum = num1 + num2 + num3;

    printf("Minimum Value is %d\nMaximum Value is %d\nTotal Sum is %d\nThe Average is %d", min, max, sum, sum/3);

    return 0;
}
#include <stdio.h>

int main(){
    
int num; 

printf("Enter a number:");
scanf("%d", &num);

switch(num > 100 || num < 1){

    case 1:
        printf("%d is out of range", num);
        break;

    default:
        switch ((num % 2) == 0){
            case 1:
                printf("%d is even", num);
                break;
            default:
                printf("%d is odd", num);
        }
}
return 0;
}
#include <stdio.h>

int main(){
    float sidelength; 

    printf("Please enter a number : "); scanf("%f",&sidelength);

    if (sidelength > 1){
        for (int i = 1; i <= sidelength; i++){
        printf("*");
        }
        printf("\n");
        for (int i = 1; i <= sidelength-2; i++){
            printf("*");
            for (int spaces =1; spaces <= sidelength-2; spaces++){
                printf(" ");
            }
            printf("*\n");
        }
        for (int i = 1; i <= sidelength; i++){
            printf("*");
        }
    }
    else if (sidelength < 1){
        printf("Error! You can't have dimensions lesser than 1!");
    }
    else{
        printf("*");
    }
    

    return 0;
}
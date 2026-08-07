#include <stdio.h>

int main(){
    
    int values[10], even, odd;

    for (int i = 1; i <= 10; i++){
        printf("Enter value %d : ", i); scanf("%d", &values[i-1]);
    }

    for (int i = 1; i <=10; i++){
        if ((values[i-1] % 2) == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d", odd);

    return 0;
}
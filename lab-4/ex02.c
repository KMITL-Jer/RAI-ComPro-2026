#include <stdio.h>

int main(){
    int sum = 0, num, i;
    i = 1;
    while (i <= 10){
        printf("%d. Enter the number: ",i);scanf("%d", &num);

        sum = sum + num;
        i++;
    }
    printf("Total sum is %d",sum);

    return 0;
}
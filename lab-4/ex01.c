#include <stdio.h>

int main(){
    float sum = 0, num, i;

        for (i = 1; i<=10; i++){
            printf("%.0f. Enter the number:", i);
            scanf("%f", &num);
            sum = sum + num;
        }
        printf("total sum is %.0f\n", sum);
        printf("Average is %.2f", sum/(i-1));

    return 0;
}
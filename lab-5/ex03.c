#include <stdio.h>

int main(){
    
    int grades[5], highestmarks = 0, totalmarks = 0;

    for (int i = 1; i <= 5; i++){
        printf("Enter the marks of student %d : ", i); scanf("%d", &grades[i-1]);
    }

    for (int i = 1; i <=5; i++){
        totalmarks = totalmarks + grades[i-1];
        if (highestmarks < grades[i-1]){
            highestmarks = grades[i-1];
        }
    }

    printf("Total Marks: %d\n", totalmarks);
    printf("Highest Marks %d", highestmarks);

    return 0;
}
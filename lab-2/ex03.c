#include <stdio.h>

int main(){

    char name[20], education[20];
    char gender;
    int age, weight;
    float height;
    
    printf("Enter Your Name: "); scanf("%s", name);
    printf("Enter Your Age: "); scanf("%d", &age);
    printf("Enter Your Height: "); scanf("%f", &height);
    printf("Enter Your Weight: "); scanf("%d", &weight);
    printf("Enter Your Gender: "); scanf(" %c", &gender);
    printf("Enter Your Education Qualification: "); scanf(" %[^\n]", education);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %0.1f\n", height);
    printf("Weight: %d\n", weight);
    printf("Gender: %c\n", gender);
    printf("Education: %s\n", education);


    return 0;
}
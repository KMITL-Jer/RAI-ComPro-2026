#include <stdio.h>

int main(){

    char firstname[20], surname[20], university[20];
    char gender;
    int age, weight;
    float height;
    
    printf("Enter Your full name: "); scanf("%s", firstname); scanf("%s", surname);
    printf("Enter Your Age: "); scanf("%d", &age);
    printf("Enter Your Height: "); scanf("%f", &height);
    printf("Enter Your University Name: "); scanf(" %[^\n]", university);

    printf("Hi! Everyone. This is %c. %s from %s. I am %d years old and my height is %.1f cm tall.", surname[0], firstname, university, age, height);


    return 0;
}
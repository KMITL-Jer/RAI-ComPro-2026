#include <stdio.h>

int main(){

    char name[20];
    int ID;
    float physics, calculus, programming;
    
    printf("Enter Your Name: "); scanf("%s", name);
    printf("Enter Your Student ID: "); scanf("%d", &ID);
    printf("Enter Your Programming score: "); scanf("%f", &programming);
    printf("Enter Your Physics score: "); scanf("%f", &physics);
    printf("Enter Your Calculus score: "); scanf("%f", &calculus);

    printf("Hi %s (%d)! Your GPA is %.2f", name, ID, (programming+physics+calculus)/3);


    return 0;
}
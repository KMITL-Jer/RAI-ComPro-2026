#include <stdio.h>

int main(){
    
char name[20], grade;
float calculus, physics, science, avg; 

printf("Enter your name:");
scanf(" %s", name);

printf("Enter your Calculus score:");
scanf("%f", &calculus);

printf("Enter your Physics score:");
scanf("%f", &physics);

printf("Enter your Science score:");
scanf("%f", &science);

avg = (calculus + physics + science)/3;

if (avg < 50){
    grade = 'F';
}
else if (avg >= 50 && avg <= 60){
    grade = 'D';
}
else if (avg >= 60 && avg <= 70){
    grade = 'C';
}
else if (avg >= 70 && avg <= 80){
    grade = 'B';
}
else{
    grade = 'A';
}

printf("%s, your average is %.2f. You got grade %c", name, avg, grade);

return 0;
}
#include <stdio.h>

int main(){
    
char gradecal, gradephys, gradecom;
float calculus, physics, compro, calvalue, physvalue, comprovalue; 

printf("Enter your Calculus score:");
scanf("%f", &calculus);

printf("Enter your Physics score:");
scanf("%f", &physics);

printf("Enter your Compro score:");
scanf("%f", &compro);

if (physics < physics){
    gradephys = 'F';
    physvalue = 0.0;
}
else if (physics >= 50 && physics <= 60){
    gradephys = 'D';
    physvalue = 1.0;
}
else if (physics >= 60 && physics <= 70){
    gradephys = 'C';
    physvalue = 2.0;
}
else if (physics >= 70 && physics <= 80){
    gradephys = 'B';
    physvalue = 3.0;
}
else{
    gradephys = 'A';
    physvalue = 4.0;
}

if (calculus < calculus){
    gradecal = 'F';
    calvalue = 0.0;
}
else if (calculus >= 50 && calculus <= 60){
    gradecal = 'D';
    calvalue = 1.0;
}
else if (calculus >= 60 && calculus <= 70){
    gradecal = 'C';
    calvalue = 2.0;
}
else if (calculus >= 70 && calculus <= 80){
    gradecal = 'B';
    calvalue = 3.0;
}
else{
    gradecal = 'A';
    calvalue = 4.0;
}

if (compro < compro){
    gradecom = 'F';
    comprovalue = 0.0;
}
else if (compro >= 50 && compro <= 60){
    gradecom = 'D';
    comprovalue = 1.0;
}
else if (compro >= 60 && compro <= 70){
    gradecom = 'C';
    comprovalue = 2.0;
}
else if (compro >= 70 && compro <= 80){
    gradecom = 'B';
    comprovalue = 3.0;
}
else{
    gradecom = 'A';
    comprovalue = 4.0;
}

printf("Subject Score Grade Grade\n--------------------------------------\n");
printf("Cal     %.0f  %c    %.2f\n", calculus, gradecal, calvalue);
printf("Physics %.0f  %c    %.2f\n", physics, gradephys, physvalue);
printf("ComPro  %.0f  %c    %.2f\n", compro, gradecom, comprovalue);
printf("GPA: %.2f", (calvalue+physvalue+comprovalue)/3.0);
return 0;
}
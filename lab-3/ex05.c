#include <stdio.h>

int main(){

    float height, radius, volume;

    printf("Enter cone height:"); scanf("%f", &height);
    printf("Enter cone radius:"); scanf("%f", &radius);

    volume = (1.0/3.0)*3.14*radius*radius*height;

    printf("%.2f", volume);

    if (volume > 260){
        printf(" This cone is perfect for Supun project");
    }
    else{
        printf(" This cone is not fit for this project");
    }


return 0;
}
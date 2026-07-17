#include <stdio.h>

int main(){

    int totaltime, hours, minutes;

    printf("Enter Total Minutes:\n");
    scanf("%d", &totaltime);

    hours = totaltime/60;
    minutes = totaltime%60;

    printf("%d minutes is %d hour(s) and %d minute(s)", totaltime, hours, minutes);


    return 0;
}
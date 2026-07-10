#include <stdio.h>

int main(){

    printf("+----------------+--------+--------+\n");
    printf("|");
    printf("%-16s"," Name");
    printf("| Score1 | Score2 |\n");
    printf("+----------------+--------+--------+\n");   

    printf("|");
    printf("%-16s"," Alice");
    printf("|");
    printf("%8s","85");
    printf("|");
    printf("%8s","90");
    printf("|\n");

    printf("|");
    printf("%-16s"," Bob");
    printf("|");
    printf("%8s","78");
    printf("|");
    printf("%8s","82");
    printf("|\n");

    printf("|");
    printf("%-16s"," Charlie");
    printf("|");
    printf("%8s","92");
    printf("|");
    printf("%8s","88");
    printf("|\n");

    printf("+----------------+--------+--------+\n");  

    return 0;
}
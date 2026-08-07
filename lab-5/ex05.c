#include <stdio.h>

int main() {
    int numbers[8];

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1); scanf("%d", &numbers[i]);
    }

    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < 8; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}
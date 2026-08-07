#include <stdio.h>

int main() {
    int n;
    int elements[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }

    for (int i = 0; i < n; i++) {
        int alreadyCounted = 0;

        for (int j = 0; j < i; j++) {
            if (elements[j] == elements[i]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) {
            continue;
        }

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (elements[j] == elements[i]) {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", elements[i], count);
    }

    return 0;
}
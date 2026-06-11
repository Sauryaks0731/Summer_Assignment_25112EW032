#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", number);

    for (i = 1; i <= number; ++i) {

        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

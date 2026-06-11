#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d is: %llu\n", num, result);
    }

    return 0;
}

unsigned long long factorial(int n) {
 
    if (n == 0 || n == 1) {
        return 1;
    }

    else {
        return n * factorial(n - 1);
    }
}
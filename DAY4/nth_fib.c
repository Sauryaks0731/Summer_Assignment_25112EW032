#include <stdio.h>

unsigned long long get_nth_fibonacci(int n) {

    if (n <= 1) {
        return 0;
    }
   
    if (n == 2) {
        return 1;
    }

    unsigned long long prev2 = 0; 
    unsigned long long prev1 = 1; 
    unsigned long long current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2; 
        prev2 = prev1;           
        prev1 = current;         
    }

    return current;
}

int main() {
    int n;

    printf("Enter the position (n): ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        unsigned long long result = get_nth_fibonacci(n);
        printf("The %dth Fibonacci term is: %llu\n", n, result);
    }

    return 0;
}
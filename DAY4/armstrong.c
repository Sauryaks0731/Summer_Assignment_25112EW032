#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original_num = num;
    int remainder;
    int digits = 0;
    double result = 0.0;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)round(result) == original_num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}